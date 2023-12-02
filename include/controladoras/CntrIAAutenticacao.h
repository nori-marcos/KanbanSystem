#ifndef KANBANSYSTEM_CNTRIAAUTENTICACAO_H
#define KANBANSYSTEM_CNTRIAAUTENTICACAO_H

#include "include/Interfaces.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

class CntrIAAutenticacao : public IAAutenticacao {
private:
    ISAutenticacao *cntrISAutenticacao;
public:
    Conta autenticar(Email *);

    void setCntrIAutenticacao(ISAutenticacao *cntrISAutenticacao) {
        this->cntrISAutenticacao = cntrISAutenticacao;
    };
};

#endif //KANBANSYSTEM_CNTRIAAUTENTICACAO_H
