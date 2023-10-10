#include <istream>
#include <iostream>
#include "include/dominios/Email.h"
#include "include/dominios/Codigo.h"
#include "include/dominios/Senha.h"
#include "include/dominios/Texto.h"
#include "test/dominios/CodigoTeste.h"
#include "test/dominios/LimiteTeste.h"
#include "test/dominios/SenhaTeste.h"

using namespace std;

int main() {

    CodigoTeste codigoTeste{};
    LimiteTeste limiteTeste{};
    SenhaTeste senhaTeste{};

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
    return 0;
}
