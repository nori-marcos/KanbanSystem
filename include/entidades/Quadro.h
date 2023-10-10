#ifndef KANBANSYSTEM_QUADRO_H
#define KANBANSYSTEM_QUADRO_H


#include "include/dominios/Texto.h"
#include "include/dominios/Limite.h"
#include "include/dominios/Codigo.h"

class Quadro {
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Limite limite;
};


#endif //KANBANSYSTEM_QUADRO_H
