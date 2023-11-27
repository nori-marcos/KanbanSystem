#include "include/containers/ContainerConta.h"

bool ContainerConta::incluir(Conta conta) {
    return container.insert(std::make_pair(conta.getEmail().getValor(), conta)).second;
}

bool ContainerConta::remover(Email email) {
    map<string, Conta>::iterator it = container.find(email.getValor());
    if (it != container.end()) {
        container.erase(it);
        return true;
    }
    return false;
}

bool ContainerConta::pesquisar(Conta *conta) {
    map<string, Conta>::iterator it = container.find(conta->getEmail().getValor());
    if (it != container.end()) {
        return it->second.getSenha().getValor() == conta->getSenha().getValor();
    }
    return false;
}

bool ContainerConta::atualizar(Conta conta) {
    map<string, Conta>::iterator it = container.find(conta.getEmail().getValor());
    if (it != container.end()) {
        it->second = conta;
        return true;
    }
    return false;
}