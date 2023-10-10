#ifndef KANBANSYSTEM_CARTAOTESTE_H
#define KANBANSYSTEM_CARTAOTESTE_H

#include <stdexcept>
#include <string>
#include "include/entidades/Cartao.h"

class CartaoTeste {
private:
    Cartao *cartao;

    int estado;

    void setUp();

    void tearDown();

    void testarCenarioSucesso();

    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};


#endif //KANBANSYSTEM_CARTAOTESTE_H
