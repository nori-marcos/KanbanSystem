#ifndef KANBANSYSTEM_CARTAO_H
#define KANBANSYSTEM_CARTAO_H


#include "include/dominios/Texto.h"
#include "include/dominios/Coluna.h"
#include "include/dominios/Codigo.h"

class Cartao {
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Coluna coluna;
};

#endif //KANBANSYSTEM_CARTAO_H
