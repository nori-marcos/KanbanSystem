#ifndef COLUNA_H
#define COLUNA_H

#include <string>
#include <stdexcept>

using namespace std;

/// Classe que representa uma coluna do quadro, que representa o status de um cartão.
/// Regras de formato:
/// - Deve ser "SOLICITADO", "EM EXECUÇÃO" ou "CONCLUÍDO".
class Coluna {
public:

private:
    /// Atributo que armazena o status da coluna.
    string status;

    /// Valida o status passado por parâmetro, que deve ser "SOLICITADO", "EM EXECUÇÃO" ou "CONCLUÍDO".
    static void validarStatus(const string &status);

public:
    /// Inicializa o objeto com o status passado por parâmetro.
    Coluna(const string &status);

    /// Inicializa o objeto com o status vazio.
    Coluna() = default;

    ///Atribui um novo status ao objeto.
    void setStatus(const string &newStatus) {
        validarStatus(newStatus);
        this->status = newStatus;
    }

    ///Retorna o status do objeto.
    string getStatus() const {
        return status;
    }
};

#endif // COLUNA_H
