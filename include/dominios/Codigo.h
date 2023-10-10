#ifndef KANBANSYSTEM_CODIGO_H
#define KANBANSYSTEM_CODIGO_H

#include <string>
#include <stdexcept>

using namespace std;

class Codigo {
private:
    ///Atributo que armazena o código
    ///Regras de formato:
    ///Exemplo: "AB12"
    /// - Deve ser composto por 2 letras maiúsculas e 2 dígitos.
    string codigo;

    ///Valida o código passado por parâmetro, que de ser composto por 2 letras maiúsculas e 2 dígitos.
    /// @param codigo código a ser validado
    static void validar(string codigo);

public:
    ///Inicializa o objeto com o código passado por parâmetro
    Codigo(const string &codigo);

    Codigo() = default;

    ///Atribui um novo código ao objeto
    void setCodigo(const string &newCodigo) {
        validar(newCodigo);
        this->codigo = newCodigo;
    };

    ///Retorna o código do objeto
    string getCodigo() const {
        return codigo;
    };
};

#endif //KANBANSYSTEM_CODIGO_H
