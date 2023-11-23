#ifndef KANBANSYSTEM_CNTRIAAUTENTICACAO_H
#define KANBANSYSTEM_CNTRIAAUTENTICACAO_H

#include "include/Interfaces.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

class CntrIAAutenticacao : public IAAutenticacao {
private:
    ISAutenticacao *cntrIAutenticacao;
public:
    bool autenticar(Email *);

    void setCntrIAutenticacao(ISAutenticacao *cntrIAutenticacao) {
        this->cntrIAutenticacao = cntrIAutenticacao;
    };
};

#endif //KANBANSYSTEM_CNTRIAAUTENTICACAO_H
