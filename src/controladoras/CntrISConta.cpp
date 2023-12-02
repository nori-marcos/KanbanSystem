#include "include/controladoras/CntrISConta.h"

bool CntrISConta::incluir(const Conta &conta) {
    bool resposta = true;

    cout << endl << "CntrISConta::incluir()" << endl;
    cout << "Nome: " << conta.getNome().getValor() << endl;
    cout << "Email: " << conta.getEmail().getValor() << endl;
    cout << "Senha: " << conta.getSenha().getValor() << endl;

    try {
        resposta = ContainerConta::incluir(conta);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}

bool CntrISConta::remover(const Email &email) {
    bool resposta = true;

    cout << endl << "CntrISConta::remover()" << endl;
    cout << "Email: " << email.getValor() << endl;

    try {
        resposta = ContainerConta::remover(email);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}

Conta CntrISConta::pesquisar(const Conta &conta) {
    Conta resposta;

    cout << endl << "CntrISConta::pesquisar()" << endl;

    try {
        resposta = ContainerConta::pesquisar(conta);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}

Conta CntrISConta::atualizar(const Conta &conta) {
    Conta resposta;

    cout << endl << "CntrISConta::atualizar()" << endl;

    try {
        resposta = ContainerConta::atualizar(conta);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}