#include <istream>
#include <iostream>
#include "Email.h"
#include "Codigo.h"

using namespace std;

int main() {
    bool emailInvalido = true;
    bool codigoInvalido = true;
    string emailString;
    string codigoString;

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
    return 0;
}
