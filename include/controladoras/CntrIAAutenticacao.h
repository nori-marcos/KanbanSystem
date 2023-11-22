#ifndef KANBANSYSTEM_CNTRIAAUTENTICACAO_H
#define KANBANSYSTEM_CNTRIAAUTENTICACAO_H

#include "include/Interfaces.h"

using namespace std;

class CntrIAAutenticacao : public IAAutenticacao {
private:
    ISAutenticacao *cntrIAutenticacao;
public:
    bool autenticar(Email *);

    void setCntrIAutenticacao(ISAutenticacao *);

};


#endif //KANBANSYSTEM_CNTRIAAUTENTICACAO_H
