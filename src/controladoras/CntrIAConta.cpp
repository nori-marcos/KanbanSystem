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
            Conta conta;
            conta.setNome(nome);
            conta.setEmail(email);
            conta.setSenha(senha);
            return cntrISConta->incluir(conta);
        } catch (invalid_argument &exp) {
            cout << "----------------------------------------" << endl;
            cout << "Dado em formato incorreto." << endl;
            cout << exp.what() << endl;
        }
    }
}

bool CntrIAConta::remover(const Email &email) {

    while (true) {
        cout << "----------------------------------------" << endl;
        try {
            return cntrISConta->remover(email);
        } catch (invalid_argument &exp) {
            cout << "----------------------------------------" << endl;
            cout << "Dado em formato incorreto." << endl;
            cout << exp.what() << endl;
        }
    }
}

Conta CntrIAConta::atualizar(Conta &conta) {
    Conta conta_atualizada;
    int campo_escolha;
    char campo_nome[80];
    char campo_senha[80];

    Texto nome;
    Email email;
    Senha senha;

    while (true) {
        cout << "----------------------------------------" << endl;
        cout << "Selecione o campo a ser atualizado:" << endl;
        cout << "1 - Nome" << endl;
        cout << "2 - Senha" << endl;
        cout << "3 - Terminar atualização" << endl;
        cin >> campo_escolha;

        switch (campo_escolha) {
            case 1:
                cout << "----------------------------------------" << endl;
                cout << "Digite seu nome:" << endl;
                cin >> campo_nome;
                try {
                    nome.setValor(string(campo_nome));
                    conta.setNome(nome);
                    conta_atualizada = cntrISConta->atualizar(conta);
                    cout << "----------------------------------------" << endl;
                    cout << "Nome atualizado com sucesso." << endl;
                    cout << "Nome: " << conta_atualizada.getNome().getValor() << endl;
                    cout << "Email: " << conta_atualizada.getEmail().getValor() << endl;
                    cout << "Senha: " << conta_atualizada.getSenha().getValor() << endl;
                } catch (invalid_argument &exp) {
                    cout << "----------------------------------------" << endl;
                    cout << "Dado em formato incorreto." << endl;
                    cout << exp.what() << endl;
                }
                break;
            case 2:
                cout << "----------------------------------------" << endl;
                cout << "Digite sua senha:" << endl;
                cin >> campo_senha;
                try {
                    senha.setValor(string(campo_senha));
                    conta.setSenha(senha);
                    conta_atualizada = cntrISConta->atualizar(conta);
                    cout << "----------------------------------------" << endl;
                    cout << "Senha atualizada com sucesso." << endl;
                    cout << "Nome: " << conta_atualizada.getNome().getValor() << endl;
                    cout << "Email: " << conta_atualizada.getEmail().getValor() << endl;
                    cout << "Senha: " << conta_atualizada.getSenha().getValor() << endl;
                } catch (invalid_argument &exp) {
                    cout << "----------------------------------------" << endl;
                    cout << "Dado em formato incorreto." << endl;
                    cout << exp.what() << endl;
                }
                break;
            case 3:
                return conta;
            default:
                cout << "----------------------------------------" << endl;
                cout << "Opção inválida." << endl;
                break;
        }
    }
}

Conta CntrIAConta::pesquisar(Conta &conta) {
    return cntrISConta->pesquisar(conta);
}



