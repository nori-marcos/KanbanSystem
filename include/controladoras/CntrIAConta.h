#ifndef KANBANSYSTEM_CNTRIACONTA_H
#define KANBANSYSTEM_CNTRIACONTA_H


#include "include/Interfaces.h"

class CntrIAConta : public IAConta {
private:
    ISConta *cntrISConta;
public:
    bool cadastrar();

    bool executar();

    void setCntrIAConta(ISConta *cntrISConta) {
        this->cntrISConta = cntrISConta;
    };
};

#endif //KANBANSYSTEM_CNTRIACONTA_H
