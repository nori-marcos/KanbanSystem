#include "include/dominios/Coluna.h"

Coluna::Coluna(const string& status) {
    validarStatus(status);
    this->status = status;
}

void Coluna::validarStatus(const string& newStatus) {
    if ((newStatus != "SOLICITADO") || (newStatus != "EM EXECUÇÃO") || (newStatus != "CONCLUIDO")) {
        throw invalid_argument("Digite o status (SOLICITADO, EM EXECUÇÃO, CONCLUIDO) do cartão com capslock ativo.");
    }
}


