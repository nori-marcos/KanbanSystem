#include "include/dominios/CodigoTeste.h"

const string CodigoTeste::VALOR_VALIDO = "LL45";
const string CodigoTeste::VALOR_INVALIDO = "ll45";

void CodigoTeste::setUp() {
    codigo = new Codigo(VALOR_VALIDO);
    estado = SUCESSO;
}

void CodigoTeste::tearDown() {
    delete codigo;
}

void CodigoTeste::testarCenarioSucesso() {
    try {
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

void CodigoTeste::testarCenarioFalha() {
    try {
        codigo->setCodigo(VALOR_INVALIDO);
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