//Marcos Noriyuki Miyata 18/0126890
//Delma Nogueira  de Jesus 22/2035705

#ifndef KANBANSYSTEM_CONTATESTE_H
#define KANBANSYSTEM_CONTATESTE_H

#include <stdexcept>
#include <string>
#include "include/entidades/Conta.h"

using namespace std;

class ContaTeste {
private:
    const static string NOME_VALIDO;

    Conta *conta;

    int estado;

    void setUp();

    void tearDown();

    void testarCenarioSucesso();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};


#endif //KANBANSYSTEM_CONTATESTE_H
