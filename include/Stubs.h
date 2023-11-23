#ifndef KANBANSYSTEM_STUBS_H
#define KANBANSYSTEM_STUBS_H


#include "Interfaces.h"

#include <stdexcept>
#include <iostream>
#include <string>

class StubISAutenticacao : public ISAutenticacao {
public:
    const static string TRIGGER_FALHA;
    const static string TRIGGER_ERRO_SISTEMA;

    bool autenticar(const Email &, const Senha &);
};

#endif //KANBANSYSTEM_STUBS_H
