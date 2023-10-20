//Marcos Noriyuki Miyata 18/0126890

#ifndef KANBANSYSTEM_CODIGOTESTE_H
#define KANBANSYSTEM_CODIGOTESTE_H

#include "include/dominios/Codigo.h"
#include <stdexcept>
#include <string>

using namespace std;

class CodigoTeste {

private:
    const static string VALOR_VALIDO;

    const static string VALOR_INVALIDO;

    Codigo *codigo;

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

#endif //KANBANSYSTEM_CODIGOTESTE_H
