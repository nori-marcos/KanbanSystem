#include "include/containers/ContainerConta.h"
#include "include/sqlite3.h"
#include <iostream>

bool conectar(sqlite3 **db, const std::string &dbName) {
    int rc = sqlite3_open(dbName.c_str(), db);
    if (rc != SQLITE_OK) {
        std::cerr << "Erro ao abrir o banco de dados: " << sqlite3_errmsg(*db) << std::endl;
        return false;
    }
    return true;
}

void desconectar(sqlite3 *db) {
    sqlite3_close(db);
}

bool executar(sqlite3 *db, const std::string &sql) {
    sqlite3_stmt *stmt;
    int rc = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0);

    if (rc != SQLITE_OK) {
        std::cerr << "Erro ao preparar a consulta: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }

    rc = sqlite3_step(stmt);

    if (rc != SQLITE_DONE) {
        std::cerr << "Erro ao executar a consulta: " << sqlite3_errmsg(db) << std::endl;
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

    std::string sql = "INSERT INTO conta (nome, email, senha) VALUES ('" +
                      conta.getNome().getValor() + "', '" +
                      conta.getEmail().getValor() + "', '" +
                      conta.getSenha().getValor() + "')";

    bool result = executar(db, sql);

    desconectar(db);
    return result;
}

bool ContainerConta::remover(const Email &email) {
    sqlite3 *db;
    if (!conectar(&db, "kanban.db")) {
        return false;
    }

    std::string sql = "DELETE FROM conta WHERE email = '" + email.getValor() + "'";

    bool result = executar(db, sql);

    desconectar(db);
    return result;
}

bool ContainerConta::pesquisar(Conta *conta) {
    sqlite3 *db;
    if (!conectar(&db, "kanban.db")) {
        return false;
    }

    std::string sql = "SELECT nome, email, senha FROM conta WHERE email = '" + conta->getEmail().getValor() + "'";

    sqlite3_stmt *stmt;
    int rc = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0);

    if (rc != SQLITE_OK) {
        std::cerr << "Erro ao preparar a consulta: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }

    rc = sqlite3_step(stmt);

    if (rc != SQLITE_ROW) {
        std::cerr << "Erro ao executar a consulta: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_finalize(stmt);
        return false;
    }

    sqlite3_finalize(stmt);
    return true;
}

bool ContainerConta::atualizar(const Conta &conta) {
    sqlite3 *db;
    if (!conectar(&db, "kanban.db")) {
        return false;
    }

    std::string sql = "UPDATE conta SET nome = '" + conta.getNome().getValor() + "', senha = '" +
                      conta.getSenha().getValor() + "' WHERE email = '" + conta.getEmail().getValor() + "'";

    bool result = executar(db, sql);

    desconectar(db);
    return result;
}
