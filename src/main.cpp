#include <istream>
#include <iostream>
#include "include/Interfaces.h"
#include "include/controladoras/CntrIAAutenticacao.h"
#include "include/Stubs.h"

using namespace std;

int main() {

    IAAutenticacao *cntrIAutenticacao = new CntrIAAutenticacao();
    StubISAutenticacao *stubISAutenticacao = new StubISAutenticacao();

    cntrIAutenticacao->setCntrIAutenticacao(stubISAutenticacao);

    bool resultado;

    Email email;

    while (true) {
        cout << endl << "Tela inicial do sistema." << endl;

        try {
            resultado = cntrIAutenticacao->autenticar(&email);
        } catch (const runtime_error &exp) {
            cout << "Erro de sistema." << endl;
            break;
        }

        if (resultado) {
            cout << endl << "Sucesso autenticacao." << endl;
            cout << endl << "Email: " << email.getEmail() << endl;
            break;
        } else {
            cout << endl << "Erro autenticacao." << endl;
            break;
        }
    }

    delete cntrIAutenticacao;
    delete stubISAutenticacao;

    return 0;
}
