#ifndef KANBANSYSTEM_CNTRISAUTENTICACAO_H
#define KANBANSYSTEM_CNTRISAUTENTICACAO_H


#include "include/Interfaces.h"
#include "include/containers/ContainerConta.h"

class CntrISAutenticacao : public ISAutenticacao {
private:
    ContainerConta *containerConta;

public:
    bool autenticar(const Email &, const Senha &);

    void setContainerConta(ContainerConta *containerConta) {
        this->containerConta = containerConta;
    };
};

#endif //KANBANSYSTEM_CNTRISAUTENTICACAO_H
