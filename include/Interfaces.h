#ifndef KANBANSYSTEM_INTERFACES_H
#define KANBANSYSTEM_INTERFACES_H


#include "include/dominios/Email.h"
#include "include/dominios/Senha.h"
#include "include/entidades/Conta.h"
#include "include/containers/ContainerConta.h"

class ISAutenticacao;

class ISConta;

class ISGerenciamento;

class IAAutenticacao {
public:
    virtual bool autenticar(Email *) = 0;

    virtual void setCntrIAutenticacao(ISAutenticacao *) = 0;

    virtual ~IAAutenticacao() {};
};

class IAConta {
public:
    virtual void cadastrar() = 0;

    virtual void executar() = 0;

    virtual void setCntrIAConta(ISConta *) = 0;

    virtual ~IAConta() {};
};

class IAGerenciamento {
public:
    virtual void executar(const Email &email) = 0;

    virtual void setCntrIGerenciamento(ISGerenciamento *) = 0;

    virtual ~IAGerenciamento() {};
};

class ISAutenticacao {
public:
    virtual bool autenticar(const Email &, const Senha &) = 0;

    virtual void setContainerConta(ContainerConta *) = 0;

    virtual ~ISAutenticacao() {};
};

class ISConta {
public:
    virtual void cadastrar(const Conta &) = 0;

    virtual void descadastrar(const Email &) = 0;

    virtual void editar(const Conta &) = 0;

    virtual void consultar(Conta *) = 0;

    virtual ~ISConta() {};
};

class ISGerenciamento {
public:
    virtual void executar(const Email &) = 0;

    virtual ~ISGerenciamento() {};
};

#endif //KANBANSYSTEM_INTERFACES_H
