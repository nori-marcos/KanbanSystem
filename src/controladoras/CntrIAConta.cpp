#include "include/controladoras/CntrIAConta.h"

bool CntrIAConta::cadastrar() {
    char campo_nome[80];
    char campo_email[80];
    char campo_senha[80];

    Texto nome;
    Email email;
    Senha senha;

    while (true) {
        cout << "----------------------------------------" << endl;
        cout << "Digite seu nome:" << endl;
        cin >> campo_nome;
        cout << "Digite seu email:" << endl;
        cin >> campo_email;
        cout << "Digite sua senha:" << endl;
        cin >> campo_senha;

        try {
            nome.setValor(string(campo_nome));
            email.setValor(string(campo_email));
            senha.setValor(string(campo_senha));
            break;
        } catch (invalid_argument &exp) {
            cout << "----------------------------------------" << endl;
            cout << "Dado em formato incorreto. Digite qualquer tecla para continuar." << endl;
            cout << exp.what() << endl;
        }
    }

    Conta conta;
    conta.setNome(nome);
    conta.setEmail(email);
    conta.setSenha(senha);

    return cntrISConta->incluir(conta);
}

bool CntrIAConta::executar() {
    // TODO
}

