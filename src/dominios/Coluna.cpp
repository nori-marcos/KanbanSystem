#include "include/dominios/Coluna.h"

Coluna::Coluna(const string& status) {
    validarStatus(status);
    this->status = status;
}

void Coluna::validarStatus(const string& newStatus) {
    if ((newStatus != "SOLICITADO") || (newStatus != "EM EXECUÇÃO") || (newStatus != "CONCLUIDO")) {
        throw invalid_argument("Digite um dos status válidos: 'SOLICITADO', 'EM EXECUÇÃO' e 'CONCLUIDO'.");
    }
}


