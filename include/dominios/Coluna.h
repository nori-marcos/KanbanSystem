#ifndef COLUNA_H
#define COLUNA_H

#include <string>
#include <stdexcept>

using namespace std;

class Coluna {
public:

private:
    /// Atributo que armazena o status da coluna.
    /// Regras de formato:
    /// - Deve ser "SOLICITADO", "EM EXECUCAO" ou "CONCLUIDO".
    string status;

    /// Valida o status passado por parâmetro, que deve ser "SOLICITADO", "EM EXECUCAO" ou "CONCLUIDO".
    /// @param status status a ser validado.
    static void validarStatus(const string &status);

public:
    /// Inicializa o objeto com o status passado por parâmetro.
    Coluna(const string &status);

    Coluna() = default;

    ///Atribui um novo status ao objeto.
    void setStatus(const string &newStatus) {
        validarStatus(newStatus);
        this->status = newStatus;
    }

    ///Retorna o status do objeto.
    string getColuna() const {
        return status;
    }
};

#endif // COLUNA_H
