#include "ColunaTeste.h"

const string ColunaTeste::VALOR_VALIDO = "EM EXECUÇÃO";
const string ColunaTeste::VALOR_INVALIDO = "inválido";

void ColunaTeste::setUp() {
    coluna = new Coluna();
    estado = SUCESSO;
}

void ColunaTeste::tearDown() {
    delete coluna;
}

void ColunaTeste::testarCenarioSucesso() {
    try {
        coluna->setStatus(VALOR_VALIDO);
        if (coluna->getStatus() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

void ColunaTeste::testarCenarioFalha() {
    try {
        coluna->setStatus(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &e) {
        return;
    }
}

int ColunaTeste::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

