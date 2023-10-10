#include "include/dominios/Limite.h"


Limite::Limite(const int& valor) {
    validarValor(valor);
    this->valor = valor;
}

void Limite::validarValor(const int& newValor) {
    if ((newValor != 5) && (newValor != 10) &&
        (newValor != 15) && (newValor != 20)) {
        throw invalid_argument("Valor deve ser 5, 10, 15 ou 20");
    }
}
