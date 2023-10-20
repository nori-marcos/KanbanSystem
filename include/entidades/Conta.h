//Marcos Noriyuki Miyata 18/0126890
//Delma Nogueira  de Jesus 22/2035705

#ifndef KANBANSYSTEM_CONTA_H
#define KANBANSYSTEM_CONTA_H


#include "include/dominios/Texto.h"
#include "include/dominios/Senha.h"
#include "include/dominios/Email.h"

///Classe que representa a conta de um usuário. A conta é usada para autenticação no sistema.
///Regras de formato:
/// - Email: "usuario@dominio".
/// - Nome: "Nome".
/// - Senha: "Ab12!".
class Conta {
private:
    Email email;
    Texto nome;
    Senha senha;

public:
    ///Inicializa o objeto com os valores passados por parâmetro.
    Conta(const Email &email, const Texto &nome, const Senha &senha);

    ///Inicializa o objeto com os valores vazios.
    Conta() = default;

    ///Atribui um novo email ao objeto.
    void setEmail(const Email &newEmail) {
        this->email = newEmail;
    };

    ///Atribui um novo nome ao objeto.
    void setNome(const Texto &newNome) {
        this->nome = newNome;
    };

    ///Atribui uma nova senha ao objeto.
    void setSenha(const Senha &newSenha) {
        this->senha = newSenha;
    };

    ///Retorna o email do objeto.
    Email getEmail() const {
        return email;
    };

    ///Retorna o nome do objeto.
    Texto getNome() const {
        return nome;
    };

    ///Retorna a senha do objeto.
    Senha getSenha() const {
        return senha;
    };
};


#endif //KANBANSYSTEM_CONTA_H
