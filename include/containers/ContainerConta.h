#ifndef KANBANSYSTEM_CONTAINERCONTA_H
#define KANBANSYSTEM_CONTAINERCONTA_H

#include <iostream>

#include <string>

#include "include/entidades/Conta.h"
#include "include/sqlite3.h"

class ContainerConta {
public:

    static bool incluir(const Conta &);

    static bool remover(const Email &);

    static bool pesquisar(Conta *);

    static bool atualizar(const Conta &);

};

#endif //KANBANSYSTEM_CONTAINERCONTA_H
