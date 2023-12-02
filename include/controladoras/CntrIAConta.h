#ifndef KANBANSYSTEM_CNTRIACONTA_H
#define KANBANSYSTEM_CNTRIACONTA_H


#include "include/Interfaces.h"

class CntrIAConta : public IAConta {
private:
    ISConta *cntrISConta;
public:
    bool incluir();

    bool remover(const Email &email);

    Conta atualizar(Conta &conta);

    Conta pesquisar(Conta &conta);

    void setCntrIAConta(ISConta *cntrISConta) {
        this->cntrISConta = cntrISConta;
    };
};

#endif //KANBANSYSTEM_CNTRIACONTA_H
