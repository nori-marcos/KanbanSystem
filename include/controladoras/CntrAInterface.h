#ifndef KANBANSYSTEM_CNTRAINTERFACE_H
#define KANBANSYSTEM_CNTRAINTERFACE_H

#include "include/Interfaces.h"

class CntrAInterface {
private:
    Email email;
    IAAutenticacao *cntrIAAutenticacao;
    IAConta *cntrIAConta;
    IAGerenciamento *cntrIAGerenciamento;

public:
    void executar();

    void setCntrIAAutenticacao(IAAutenticacao *cntrIAAutenticacao) {
        this->cntrIAAutenticacao = cntrIAAutenticacao;
    }

    void setCntrIAConta(IAConta *cntrIAConta) {
        this->cntrIAConta = cntrIAConta;
    };

    void setCntrIAGerenciamento(IAGerenciamento *cntrIAGerenciamento) {
        this->cntrIAGerenciamento = cntrIAGerenciamento;
    };
};

#endif //KANBANSYSTEM_CNTRAINTERFACE_H
