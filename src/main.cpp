#include <istream>
#include <iostream>
#include "include/dominios/Codigo.h"
#include "include/dominios/Senha.h"
#include "test/dominios/CodigoTeste.h"
#include "test/dominios/LimiteTeste.h"
#include "test/dominios/SenhaTeste.h"
#include "test/dominios/ColunaTeste.h"
#include "test/dominios/EmailTeste.h"
#include "test/dominios/TextoTeste.h"

using namespace std;

int main() {

    CodigoTeste codigoTeste{};
    ColunaTeste colunaTeste{};
    EmailTeste emailTeste{};
    LimiteTeste limiteTeste{};
    SenhaTeste senhaTeste{};
    TextoTeste textoTeste{};

    switch (codigoTeste.run()) {
        case CodigoTeste::SUCESSO:
            cout << "SUCESSO - CODIGO" << endl;
            break;
        case CodigoTeste::FALHA:
            cout << "FALHA - CODIGO" << endl;
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

    switch (emailTeste.run()) {
        case EmailTeste::SUCESSO:
            cout << "SUCESSO - EMAIL" << endl;
            break;
        case EmailTeste::FALHA:
            cout << "FALHA - EMAIL" << endl;
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

    switch (textoTeste.run()) {
        case TextoTeste::SUCESSO:
            cout << "SUCESSO - TEXTO" << endl;
            break;
        case TextoTeste::FALHA:
            cout << "FALHA - TEXTO" << endl;
            break;
    }


    return 0;
}
