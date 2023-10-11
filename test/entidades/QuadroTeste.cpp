#include "QuadroTeste.h"

const string QuadroTeste::CODIGO_VALIDO = "LL45";

void QuadroTeste::setUp() {
    quadro = new Quadro();
    estado = SUCESSO;
}

void QuadroTeste::tearDown() {
    delete quadro;
}

void QuadroTeste::testarCenarioSucesso() {
    try {
        Codigo codigo;
        codigo.setCodigo(CODIGO_VALIDO);
        quadro->setCodigo(codigo);
        if (quadro->getCodigo().getCodigo() != CODIGO_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

int QuadroTeste::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

