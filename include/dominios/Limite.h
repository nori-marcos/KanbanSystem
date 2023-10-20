//Marcos Noriyuki Miyata 18/0126890
//Gustavo Vieira do Nascimento 22/2012872

#ifndef KANBANSYSTEM_LIMITE_H
#define KANBANSYSTEM_LIMITE_H

#include <stdexcept>

using namespace std;

/// Classe que representa o limite de cartões de um quadro.
///Regras de formato:
/// - Deve ser um inteiro válido: 5, 10, 15 ou 20.
class Limite {
private:
    int valor;

    static void validarValor(const int &newValor);

public:
    ///Inicializa o objeto com o valor passado por parâmetro.
    Limite(const int &valor);

    ///Inicializa o objeto com o valor vazio.
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
