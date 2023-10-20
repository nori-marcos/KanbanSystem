//Marcos Noriyuki Miyata 18/0126890

#ifndef KANBANSYSTEM_EMAILTESTE_H
#define KANBANSYSTEM_EMAILTESTE_H

#include <stdexcept>
#include <string>
#include "include/dominios/Email.h"

using namespace std;

class EmailTeste {

private:
    const static string VALOR_VALIDO;

    const static string VALOR_INVALIDO;

    Email *email;

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

#endif //KANBANSYSTEM_EMAILTESTE_H
