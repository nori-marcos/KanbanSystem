#include "include/controladoras/CntrISConta.h"

bool CntrISConta::incluir(const Conta &conta) {
    bool resposta = true;

    cout << endl << "CntrISConta::incluir()" << endl;
    cout << "Nome: " << conta.getNome().getValor() << endl;
    cout << "Email: " << conta.getEmail().getValor() << endl;
    cout << "Senha: " << conta.getSenha().getValor() << endl;

    try {
        resposta = containerConta->incluir(conta);
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
        resposta = containerConta->remover(email);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}

bool CntrISConta::pesquisar(Conta *conta) {
    bool resposta = true;

    cout << endl << "CntrISConta::pesquisar()" << endl;
    cout << "Nome: " << conta->getNome().getValor() << endl;
    cout << "Email: " << conta->getEmail().getValor() << endl;
    cout << "Senha: " << conta->getSenha().getValor() << endl;

    try {
        resposta = containerConta->pesquisar(conta);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}

bool CntrISConta::atualizar(const Conta &conta) {
    bool resposta = true;

    cout << endl << "CntrISConta::atualizar()" << endl;
    cout << "Nome: " << conta.getNome().getValor() << endl;
    cout << "Email: " << conta.getEmail().getValor() << endl;
    cout << "Senha: " << conta.getSenha().getValor() << endl;

    try {
        resposta = containerConta->atualizar(conta);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}