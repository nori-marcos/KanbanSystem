#ifndef KANBANSYSTEM_CODIGO_H
#define KANBANSYSTEM_CODIGO_H

#include <string>
#include <stdexcept>

using namespace std;

///Classe que representa o código de um cartão.
///Regras de formato:
/// - Exemplo: "AB12".
/// - Deve ser composto por 2 letras maiúsculas e 2 dígitos.
class Codigo {
private:
    string codigo;

    static void validar(string codigo);

public:
    ///Inicializa o objeto com o código passado por parâmetro.
    Codigo(const string &codigo);

    ///Inicializa o objeto com o código vazio.
    Codigo() = default;

    ///Atribui um novo código ao objeto
    ///@param newCodigo código a ser atribuído ao objeto que precisa ser válido
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
