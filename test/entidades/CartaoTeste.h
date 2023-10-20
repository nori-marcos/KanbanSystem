//Marcos Noriyuki Miyata 18/0126890
//Luis Henrique Wiltgen de Toledo 22/1003968

#ifndef KANBANSYSTEM_CARTAOTESTE_H
#define KANBANSYSTEM_CARTAOTESTE_H

#include <stdexcept>
#include <string>
#include "include/entidades/Cartao.h"

class CartaoTeste {
private:
    const static string CODIGO_VALIDO;

    Cartao *cartao;

    int estado;

    void setUp();

    void tearDown();

    void testarCenarioSucesso();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};


#endif //KANBANSYSTEM_CARTAOTESTE_H
