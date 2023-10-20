//Marcos Noriyuki Miyata 18/0126890
//Luis Henrique Wiltgen de Toledo 22/1003968

#ifndef KANBANSYSTEM_TEXTOTESTE_H
#define KANBANSYSTEM_TEXTOTESTE_H

#include <stdexcept>
#include <string>
#include "include/dominios/Texto.h"

using namespace std;

class TextoTeste {
private:
    const static string VALOR_VALIDO;

    const static string VALOR_INVALIDO;

    Texto *texto;

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


#endif //KANBANSYSTEM_TEXTOTESTE_H
