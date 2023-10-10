#ifndef KANBANSYSTEM_CONTA_H
#define KANBANSYSTEM_CONTA_H


#include "include/dominios/Texto.h"
#include "include/dominios/Senha.h"
#include "include/dominios/Email.h"

class Conta {
private:
    Email email;
    Texto nome;
    Senha senha;
};


#endif //KANBANSYSTEM_CONTA_H
