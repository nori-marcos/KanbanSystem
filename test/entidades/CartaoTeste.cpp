#include "CartaoTeste.h"

const string CartaoTeste::CODIGO_VALIDO = "LL45";

void CartaoTeste::setUp() {
    cartao = new Cartao();
    estado = SUCESSO;
}

void CartaoTeste::tearDown() {
    delete cartao;
}

void CartaoTeste::testarCenarioSucesso() {
    try {
        Codigo codigo;
        codigo.setValor(CODIGO_VALIDO);
        cartao->setCodigo(codigo);
        if (cartao->getCodigo().getValor() != CODIGO_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

int CartaoTeste::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

