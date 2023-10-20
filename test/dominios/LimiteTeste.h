//Marcos Noriyuki Miyata 18/0126890
//Gustavo Vieira do Nascimento 22/2012872

#ifndef KANBANSYSTEM_LIMITETESTE_H
#define KANBANSYSTEM_LIMITETESTE_H


#include "include/dominios/Limite.h"

class LimiteTeste {

private:
    const static int VALOR_VALIDO;

    const static int VALOR_INVALIDO;

    Limite *limite;

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


#endif //KANBANSYSTEM_LIMITETESTE_H
