#include <istream>
#include <iostream>
#include "Email.h"
#include "Codigo.h"
#include "Senha.h"

using namespace std;

int main() {
    bool emailInvalido = true;
    bool codigoInvalido = true;
    bool senhaInvalida = true;
    string emailString;
    string codigoString;
    string senhaString;


    while (emailInvalido) {
        cout << "Email: " << emailString << endl;
        cin >> emailString;

        try {
            Email email = Email(emailString);
            cout << email.getEmail() << endl;
            emailInvalido = false;
        } catch (invalid_argument &e) {
            cout << e.what() << endl;
            emailString = "";
        }
    }
    cout << "Email cadastrado com sucesso!" << endl;
    cout << "-----------------------------" << endl;
    while (codigoInvalido) {
        cout << "Codigo: " << codigoString << endl;
        cin >> codigoString;

        try {
            Codigo codigo = Codigo(codigoString);
            cout << codigo.getCodigo() << endl;
            codigoInvalido = false;
        } catch (invalid_argument &e) {
            cout << e.what() << endl;
            codigoString = "";
        }
    }
    cout << "Codigo cadastrado com sucesso!" << endl;
    cout << "-----------------------------" << endl;

    while (senhaInvalida) {
        cout << "Senha: " << senhaString << endl;
        cin >> senhaString;

        try {
            Senha senha = Senha(senhaString);
            cout << senha.getSenha() << endl;
            senhaInvalida = false;
        } catch (invalid_argument &e) {
            cout << e.what() << endl;
            senhaString = "";
        }
    }
    cout << "Senha cadastrada com sucesso!" << endl;
    cout << "-----------------------------" << endl;

    return 0;
}
