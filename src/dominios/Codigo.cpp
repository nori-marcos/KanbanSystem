#include "include/dominios/Codigo.h"

Codigo::Codigo(const string& codigo) {
    validar(codigo);
    this->codigo = codigo;
}

void Codigo::validar(string codigo) {
    size_t tamanho = codigo.length();

    for (int i = 0; i < tamanho; i++) {
        if (i > 3) {
            throw invalid_argument("Código inválido, deve ter 2 letras maiúsculas e 2 dígitos");
        }
        if (i < 2) {
            if (!isupper(codigo[i])) {
                throw invalid_argument("Código inválido, deve ter 2 letras maiúsculas e 2 dígitos");
            }
        } else {
            if (!isdigit(codigo[i])) {
                throw invalid_argument("Código inválido, deve ter 2 letras maiúsculas e 2 dígitos");
            }
        }
    }
}