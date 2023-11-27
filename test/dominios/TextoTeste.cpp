#include "TextoTeste.h"

const string TextoTeste::VALOR_VALIDO = "Texto de teste";
const string TextoTeste::VALOR_INVALIDO = "texto começando com letra minúscula";

void TextoTeste::setUp() {
    texto = new Texto();
    estado = SUCESSO;
}

void TextoTeste::tearDown() {
    delete texto;
}

void TextoTeste::testarCenarioSucesso() {
    try {
        texto->setValor(VALOR_VALIDO);
        if (texto->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &e) {
        estado = FALHA;
    }
}

void TextoTeste::testarCenarioFalha() {
    try {
        texto->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &e) {
        return;
    }
}

int TextoTeste::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
