#include <istream>
#include <iostream>
#include "include/dominios/Codigo.h"
#include "include/dominios/Senha.h"
#include "test/dominios/CodigoTeste.h"
#include "test/dominios/LimiteTeste.h"
#include "test/dominios/SenhaTeste.h"
#include "test/dominios/ColunaTeste.h"

using namespace std;

int main() {

    CodigoTeste codigoTeste{};
    LimiteTeste limiteTeste{};
    SenhaTeste senhaTeste{};
    ColunaTeste colunaTeste{};

    switch (codigoTeste.run()) {
        case CodigoTeste::SUCESSO:
            cout << "SUCESSO - CODIGO" << endl;
            break;
        case CodigoTeste::FALHA:
            cout << "FALHA - CODIGO" << endl;
            break;
    }

    switch (limiteTeste.run()) {
        case LimiteTeste::SUCESSO:
            cout << "SUCESSO - LIMITE" << endl;
            break;
        case LimiteTeste::FALHA:
            cout << "FALHA - LIMITE" << endl;
            break;
    }

    switch (senhaTeste.run()) {
        case SenhaTeste::SUCESSO:
            cout << "SUCESSO - SENHA" << endl;
            break;
        case SenhaTeste::FALHA:
            cout << "FALHA - SENHA" << endl;
            break;
    }

    switch (colunaTeste.run()) {
        case ColunaTeste::SUCESSO:
            cout << "SUCESSO - COLUNA" << endl;
            break;
        case ColunaTeste::FALHA:
            cout << "FALHA - COLUNA" << endl;
            break;
    }

    return 0;
}
