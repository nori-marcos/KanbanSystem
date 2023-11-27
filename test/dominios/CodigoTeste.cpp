#include "CodigoTeste.h"

const string CodigoTeste::VALOR_VALIDO = "LL45";
const string CodigoTeste::VALOR_INVALIDO = "ll45";

void CodigoTeste::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
}

void CodigoTeste::tearDown() {
    delete codigo;
}

void CodigoTeste::testarCenarioSucesso() {
    try {
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

void CodigoTeste::testarCenarioFalha() {
    try {
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &e) {
        return;
    }
}

int CodigoTeste::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}