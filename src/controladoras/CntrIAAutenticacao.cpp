#include "include/controladoras/CntrIAAutenticacao.h"

bool CntrIAAutenticacao::autenticar(Email *email) {
    bool resultado;
    Senha senha;
    string entrada;

    while (true) {
        try {
            cout << "Digite o email: ";
            cin >> entrada;
            email->setValor(entrada);

            cout << "Digite a senha: ";
            cin >> entrada;
            senha.setValor(entrada);
            break;
        } catch (const invalid_argument &exception) {
            cout << endl << exception.what() << endl;
        }
    }

    resultado = cntrIAutenticacao->autenticar(*email, senha);

    return resultado;
}