#include "include/controladoras/CntrIAAutenticacao.h"

Conta CntrIAAutenticacao::autenticar(Email *email) {
    char campo_email[80];
    char campo_senha[80];

    Senha senha;

    while (true) {
        cout << "----------------------------------------" << endl;
        cout << "Digite seu email:" << endl;
        cin >> campo_email;
        cout << "Digite sua senha:" << endl;
        cin >> campo_senha;

        try {
            email->setValor(string(campo_email));
            senha.setValor(string(campo_senha));
            return cntrISAutenticacao->autenticar(*email, senha);
        } catch (invalid_argument &exp) {
            cout << "----------------------------------------" << endl;
            cout << "Dado em formato incorreto." << endl;
            cout << exp.what() << endl;
        }
        break;
    }
    return Conta();
}