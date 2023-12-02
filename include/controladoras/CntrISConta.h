#ifndef KANBANSYSTEM_CNTRISCONTA_H
#define KANBANSYSTEM_CNTRISCONTA_H


#include "include/Interfaces.h"

class CntrISConta : public ISConta {
private:
    ContainerConta *containerConta;
public:
    bool incluir(const Conta &);

    bool remover(const Email &);

    Conta pesquisar(const Conta &);

    Conta atualizar(const Conta &);

    void setCntrISConta(ContainerConta *containerConta) {
        this->containerConta = containerConta;
    };

    ~CntrISConta() {
        delete containerConta;
    };

};


#endif //KANBANSYSTEM_CNTRISCONTA_H
