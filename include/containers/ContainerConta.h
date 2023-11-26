#ifndef KANBANSYSTEM_CONTAINERCONTA_H
#define KANBANSYSTEM_CONTAINERCONTA_H

#include <iostream>

#include <map>

#include <string>

#include "include/entidades/Conta.h"

class ContainerConta {
private:
    map<string, Conta> container;
public:
    bool incluir(Conta);

    bool remover(Email);

    bool pesquisar(Conta *);

    bool atualizar(Conta);
};

#endif //KANBANSYSTEM_CONTAINERCONTA_H
