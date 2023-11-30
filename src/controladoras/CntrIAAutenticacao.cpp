#include "include/controladoras/CntrIAAutenticacao.h"

bool CntrIAAutenticacao::autenticar(Email *email) {
    string texto1 = "Digite seu email:";
    string texto2 = "Digite sua senha:";
    string texto3 = "Dado em formato incorreto. Digite qualquer tecla para continuar.";

    char campo1[80];
    char campo2[80];

    Senha senha;

    while (true) {
        cout << "----------------------------------------" << endl;
        cout << "Digite seu email:" << endl;
        cin >> campo1;
        cout << "Digite sua senha:" << endl;
        cin >> campo2;

        try {
            email->setValor(string(campo1));
            senha.setValor(string(campo2));
            break;
        } catch (invalid_argument &exp) {
            cout << "----------------------------------------" << endl;
            cout << "Dado em formato incorreto. Digite qualquer tecla para continuar." << endl;
            cout << exp.what() << endl;
        }
    }

    return cntrIAutenticacao->autenticar(*email, senha);
}