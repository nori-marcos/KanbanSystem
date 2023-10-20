//Marcos Noriyuki Miyata 18/0126890
//Gustavo Vieira do Nascimento 22/2012872

#ifndef KANBANSYSTEM_SENHATESTE_H
#define KANBANSYSTEM_SENHATESTE_H

#include <stdexcept>
#include <string>
#include "include/dominios/Senha.h"

using namespace std;

class SenhaTeste {

private:
    const static string VALOR_VALIDO;

    const static string VALOR_INVALIDO;

    Senha *senha;

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


#endif //KANBANSYSTEM_SENHATESTE_H
