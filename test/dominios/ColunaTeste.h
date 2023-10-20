//Marcos Noriyuki Miyata 18/0126890

#ifndef KANBANSYSTEM_COLUNATESTE_H
#define KANBANSYSTEM_COLUNATESTE_H

#include <stdexcept>
#include <string>
#include "include/dominios/Coluna.h"

class ColunaTeste {

private:
    const static string VALOR_VALIDO;

    const static string VALOR_INVALIDO;

    Coluna *coluna;

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


#endif //KANBANSYSTEM_COLUNATESTE_H
