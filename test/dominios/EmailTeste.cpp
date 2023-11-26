#include "EmailTeste.h"

const string EmailTeste::VALOR_VALIDO = "aluno@gmail.com";
const string EmailTeste::VALOR_INVALIDO = "aluno.com.br";

void EmailTeste::setUp() {
    email = new Email();
    estado = SUCESSO;
}

void EmailTeste::tearDown() {
    delete email;
}

void EmailTeste::testarCenarioSucesso() {
    try {
        email->setEmail(VALOR_VALIDO);
        if (email->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

void EmailTeste::testarCenarioFalha() {
    try {
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &e) {
        return;
    }
}

int EmailTeste::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
