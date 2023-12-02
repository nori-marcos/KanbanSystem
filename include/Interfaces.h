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
    virtual Conta autenticar(Email *) = 0;

    virtual void setCntrIAutenticacao(ISAutenticacao *) = 0;

    virtual ~IAAutenticacao() {};
};

class IAConta {
public:
    virtual bool incluir() = 0;

    virtual bool remover(const Email &) = 0;

    virtual Conta atualizar(Conta &) = 0;

    virtual Conta pesquisar(Conta &) = 0;

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
    virtual Conta autenticar(const Email &, const Senha &) = 0;

    virtual void setContainerConta(ContainerConta *) = 0;

    virtual ~ISAutenticacao() {};
};

class ISConta {
public:
    virtual bool incluir(const Conta &) = 0;

    virtual bool remover(const Email &) = 0;

    virtual Conta atualizar(const Conta &) = 0;

    virtual Conta pesquisar(const Conta &) = 0;

    virtual void setCntrISConta(ContainerConta *) = 0;

    virtual ~ISConta() {};
};

class ISGerenciamento {
public:
    virtual void executar(const Email &) = 0;

    virtual ~ISGerenciamento() {};
};

#endif //KANBANSYSTEM_INTERFACES_H
