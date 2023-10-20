//Marcos Noriyuki Miyata 18/0126890
//Delma Nogueira  de Jesus 22/2035705

#ifndef KANBANSYSTEM_QUADROTESTE_H
#define KANBANSYSTEM_QUADROTESTE_H

#include <stdexcept>
#include <string>
#include "include/entidades/Quadro.h"

using namespace std;

class QuadroTeste {
private:
    const static string CODIGO_VALIDO;

    Quadro *quadro;

    int estado;

    void setUp();

    void tearDown();

    void testarCenarioSucesso();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};


#endif //KANBANSYSTEM_QUADROTESTE_H
