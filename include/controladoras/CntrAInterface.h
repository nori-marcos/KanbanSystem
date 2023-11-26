#ifndef KANBANSYSTEM_CNTRAINTERFACE_H
#define KANBANSYSTEM_CNTRAINTERFACE_H


#include "include/Interfaces.h"

class CntrAInterface {
private:
    IAAutenticacao *cntrIAAutenticacao;
    IAConta *cntrIAConta;
    IAGerenciamento *cntrIAGerenciamento;

    void setCntrIAAutenticacao(IAAutenticacao *cntrIAAutenticacao) {
        this->cntrIAAutenticacao = cntrIAAutenticacao;
    };

    void setCntrIAConta(IAConta *cntrIAConta) {
        this->cntrIAConta = cntrIAConta;
    };

    void setCntrIAGerenciamento(IAGerenciamento *cntrIAGerenciamento) {
        this->cntrIAGerenciamento = cntrIAGerenciamento;
    };

public:
    int executar();
};


#endif //KANBANSYSTEM_CNTRAINTERFACE_H
