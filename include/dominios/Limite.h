#ifndef KANBANSYSTEM_LIMITE_H
#define KANBANSYSTEM_LIMITE_H

#include <stdexcept>

using namespace std;

class Limite {
private:
    int valor;

    static void validarValor(const int &newValor);

public:
    Limite(const int &valor);

    Limite() = default;

    int getValor() const {
        return valor;
    }

    void setValor(const int &newValor) {
        validarValor(newValor);
        this->valor = newValor;
    }

};


#endif //KANBANSYSTEM_LIMITE_H
