#include "CartaoTeste.h"

void CartaoTeste::setUp() {
    cartao = new Cartao();
    estado = SUCESSO;
}

void CartaoTeste::tearDown() {
    delete cartao;
}

void CartaoTeste::testarCenarioSucesso() {
    try {
        Codigo codigo = Codigo("LL45");
        cartao->setCodigo(codigo);

        if (cartao->getCodigo().getCodigo() != codigo.getCodigo()) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

void CartaoTeste::testarCenarioFalha() {
    try {
        Codigo codigo = Codigo("ll45");
        cartao->setCodigo(codigo);
        estado = FALHA;
    } catch (invalid_argument &e) {
        return;
    }
}

int CartaoTeste::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

