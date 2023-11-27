#include "ContaTeste.h"

const string ContaTeste::NOME_VALIDO = "Lucas";

void ContaTeste::setUp() {
    conta = new Conta();
    estado = SUCESSO;
}

void ContaTeste::tearDown() {
    delete conta;
}

void ContaTeste::testarCenarioSucesso() {
    try {
        Texto nome;
        nome.setValor(NOME_VALIDO);
        conta->setNome(nome);
        if (conta->getNome().getValor() != NOME_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

int ContaTeste::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}