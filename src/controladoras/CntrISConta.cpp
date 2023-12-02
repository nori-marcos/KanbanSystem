#include "include/controladoras/CntrISConta.h"

bool CntrISConta::incluir(const Conta &conta) {
    bool resposta = true;

    try {
        resposta = ContainerConta::incluir(conta);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}

bool CntrISConta::remover(const Email &email) {
    bool resposta = true;

    try {
        resposta = ContainerConta::remover(email);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}

Conta CntrISConta::pesquisar(const Conta &conta) {
    Conta resposta;

    try {
        resposta = ContainerConta::pesquisar(conta);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}

Conta CntrISConta::atualizar(const Conta &conta) {
    Conta resposta;

    try {
        resposta = ContainerConta::atualizar(conta);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}