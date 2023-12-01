#include "include/controladoras/CntrIAConta.h"

bool CntrIAConta::incluir() {
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
            cout << "Dado em formato incorreto." << endl;
            cout << exp.what() << endl;
        }
    }

    Conta conta;
    conta.setNome(nome);
    conta.setEmail(email);
    conta.setSenha(senha);

    return cntrISConta->incluir(conta);
}

bool CntrIAConta::remover() {
    char campo_email[80];

    Email email;

    while (true) {
        cout << "----------------------------------------" << endl;
        cout << "Digite seu email:" << endl;
        cin >> campo_email;

        try {
            email.setValor(string(campo_email));
            break;
        } catch (invalid_argument &exp) {
            cout << "----------------------------------------" << endl;
            cout << "Dado em formato incorreto." << endl;
            cout << exp.what() << endl;
        }
    }

    return cntrISConta->remover(email);
}

bool CntrIAConta::atualizar() {
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
            cout << "Dado em formato incorreto." << endl;
            cout << exp.what() << endl;
        }
    }

    Conta conta;
    conta.setNome(nome);
    conta.setEmail(email);
    conta.setSenha(senha);

    return cntrISConta->atualizar(conta);
}

bool CntrIAConta::pesquisar() {
    char campo_email[80];

    Email email;

    while (true) {
        cout << "----------------------------------------" << endl;
        cout << "Digite seu email:" << endl;
        cin >> campo_email;

        try {
            email.setValor(string(campo_email));
            break;
        } catch (invalid_argument &exp) {
            cout << "----------------------------------------" << endl;
            cout << "Dado em formato incorreto." << endl;
            cout << exp.what() << endl;
        }
    }

    Conta conta;
    conta.setEmail(email);

    return cntrISConta->pesquisar(&conta);
}



