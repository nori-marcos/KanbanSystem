#include "include/containers/ContainerConta.h"
#include "include/sqlite3.h"
#include <iostream>

bool conectar(sqlite3 **db, const std::string &dbName) {
    int rc = sqlite3_open(dbName.c_str(), db);
    if (rc != SQLITE_OK) {
        cout << "Erro ao abrir o banco de dados: " << sqlite3_errmsg(*db) << endl;
        return false;
    }
    return true;
}

void desconectar(sqlite3 *db) {
    sqlite3_close(db);
}

bool executar(sqlite3 *db, const std::string &sql) {
    sqlite3_stmt *stmt;
    int rc = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);

    if (rc != SQLITE_OK) {
        cout << "Erro ao preparar a consulta: " << sqlite3_errmsg(db) << endl;
        return false;
    }

    rc = sqlite3_step(stmt);

    if (rc != SQLITE_DONE) {
        cout << "Erro ao executar a consulta: " << sqlite3_errmsg(db) << endl;
        sqlite3_finalize(stmt);
        return false;
    }

    sqlite3_finalize(stmt);
    return true;
}

bool ContainerConta::incluir(const Conta &conta) {
    sqlite3 *db;
    if (!conectar(&db, "kanban.db")) {
        return false;
    }

    std::string sql = "INSERT INTO conta (nome, email, senha) VALUES ('"
                      + conta.getNome().getValor() + "', '"
                      + conta.getEmail().getValor() + "', '"
                      + conta.getSenha().getValor() + "')";

    bool result = executar(db, sql);

    desconectar(db);
    return result;
}

bool ContainerConta::remover(const Email &email) {
    sqlite3 *db;
    if (!conectar(&db, "kanban.db")) {
        return false;
    }

    std::string sql = "DELETE FROM conta WHERE email = '"
                      + email.getValor() + "'";

    bool result = executar(db, sql);

    desconectar(db);
    return result;
}

Conta ContainerConta::pesquisar(Conta conta) {
    sqlite3 *db;
    if (!conectar(&db, "kanban.db")) {
        throw runtime_error("Erro ao conectar ao banco de dados.");
    }

    string sql;
    sql = "SELECT nome, email, senha FROM conta WHERE email = '"
          + conta.getEmail().getValor() + "'";

    sqlite3_stmt *stmt;
    int rc = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);

    if (rc != SQLITE_OK) {
        cout << "Erro ao preparar a consulta: " << sqlite3_errmsg(db) << endl;
        throw invalid_argument("Erro ao preparar a consulta. Verifique se o email está correto.");
    }

    rc = sqlite3_step(stmt);

    if (rc != SQLITE_ROW) {
        cout << "Erro ao executar a consulta: " << sqlite3_errmsg(db) << endl;
        sqlite3_finalize(stmt);
        throw invalid_argument("Erro ao executar a consulta. Verifique se o email está correto.");
    }

    string senhaBanco = string(reinterpret_cast<const char *>(sqlite3_column_text(stmt, 2)));

    if (senhaBanco != conta.getSenha().getValor()) {
        sqlite3_finalize(stmt);
        throw invalid_argument("Verifique se o email e a senha estão corretos.");
    }

    conta.setNome(string(reinterpret_cast<const char *>(sqlite3_column_text(stmt, 0))));
    conta.setEmail(string(reinterpret_cast<const char *>(sqlite3_column_text(stmt, 1))));
    conta.setSenha(string(reinterpret_cast<const char *>(sqlite3_column_text(stmt, 2))));

    sqlite3_finalize(stmt);
    return conta;
}

Conta ContainerConta::atualizar(const Conta &conta) {
    sqlite3 *db;
    if (!conectar(&db, "kanban.db")) {
        throw runtime_error("Erro ao conectar ao banco de dados.");
    }

    std::string sql = "UPDATE conta SET nome = '"
                      + conta.getNome().getValor()
                      + "', senha = '"
                      + conta.getSenha().getValor()
                      + "' WHERE email = '"
                      + conta.getEmail().getValor()
                      + "'";

    bool result = executar(db, sql);

    if (!result) {
        throw runtime_error("Erro ao executar a consulta de atualização.");
    }

    Conta contaAtualizada;

    try {
        contaAtualizada = pesquisar(conta);
    } catch (const invalid_argument &e) {
        throw runtime_error("Erro ao pesquisar a conta após a atualização.");
    }

    desconectar(db);

    return contaAtualizada;
}

