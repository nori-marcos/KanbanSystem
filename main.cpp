#include <istream>
#include <iostream>
#include "Email.h"
#include "Teste.h"

using namespace std;

int main() {
    bool emailInvalido = true;
    string emailString;

    Teste teste;

    cout << teste.SOLICITADO << endl;

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
    return 0;
}
