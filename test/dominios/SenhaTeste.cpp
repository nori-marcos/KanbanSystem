#include "SenhaTeste.h"

const string SenhaTeste::VALOR_VALIDO = "Ab13!";
const string SenhaTeste::VALOR_INVALIDO = "inválido";

void SenhaTeste::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}

void SenhaTeste::tearDown() {
    delete senha;
}

void SenhaTeste::testarCenarioSucesso() {
    try {
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

void SenhaTeste::testarCenarioFalha() {
    try {
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &e) {
        return;
    }
}

int SenhaTeste::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}