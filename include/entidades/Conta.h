#ifndef KANBANSYSTEM_CONTA_H
#define KANBANSYSTEM_CONTA_H


#include "include/dominios/Texto.h"
#include "include/dominios/Senha.h"
#include "include/dominios/Email.h"

class Conta {
private:
    Email email;
    Texto nome;
    Senha senha;

public:
    Conta(const Email &email, const Texto &nome, const Senha &senha);

    Conta() = default;

    void setEmail(const Email &newEmail) {
        this->email = newEmail;
    };

    void setNome(const Texto &newNome) {
        this->nome = newNome;
    };

    void setSenha(const Senha &newSenha) {
        this->senha = newSenha;
    };

    Email getEmail() const {
        return email;
    };

    Texto getNome() const {
        return nome;
    };

    Senha getSenha() const {
        return senha;
    };
};


#endif //KANBANSYSTEM_CONTA_H
