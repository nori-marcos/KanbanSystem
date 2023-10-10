#include "LimiteTeste.h"

const int LimiteTeste::VALOR_VALIDO = 5;
const int LimiteTeste::VALOR_INVALIDO = 0;

void LimiteTeste::setUp() {
    limite = new Limite();
    estado = SUCESSO;
}

void LimiteTeste::tearDown() {
    delete limite;
}

void LimiteTeste::testarCenarioSucesso() {
    try {
        limite->setValor(VALOR_VALIDO);
        if (limite->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

void LimiteTeste::testarCenarioFalha() {
    try {
        limite->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &e) {
        return;
    }
}

int LimiteTeste::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

