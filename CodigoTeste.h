#ifndef KANBANSYSTEM_CODIGOTESTE_H
#define KANBANSYSTEM_CODIGOTESTE_H

#include "Codigo.h"
#include <stdexcept>
#include <string>

using namespace std;

class CodigoTeste {

private:
    inline const static string VALOR_VALIDO = "LL45";

    inline const static string VALOR_INVALIDO = "ll45";

    Codigo *codigo;

    int estado;

    void setUp();

    void tearDown();

    void testarCenarioSucesso();

    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
};


#endif //KANBANSYSTEM_CODIGOTESTE_H
