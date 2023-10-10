#ifndef KANBANSYSTEM_LIMITE_H
#define KANBANSYSTEM_LIMITE_H

#include <stdexcept>

using namespace std;

class Limite {
private:
    ///Atributo que armazena o valor do limite
    int valor;

    ///Valida o valor passado por parâmetro, que deve ser um inteiro válido: 5, 10, 15 ou 20.
    /// @param valor valor a ser validado.
    static void validarValor(const int &newValor);

public:
    ///Inicializa o objeto com o valor passado por parâmetro.
    ///Regras de formato:
    /// - Deve ser um inteiro válido: 5, 10, 15 ou 20.
    Limite(const int &valor);

    Limite() = default;

    ///Retorna o valor do objeto.
    int getValor() const {
        return valor;
    }

    ///Atribui um novo valor ao objeto.
    void setValor(const int &newValor) {
        validarValor(newValor);
        this->valor = newValor;
    }

};


#endif //KANBANSYSTEM_LIMITE_H
