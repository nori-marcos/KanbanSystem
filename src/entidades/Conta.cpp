#include "include/entidades/Conta.h"

Conta::Conta(const Email &email, const Texto &nome, const Senha &senha) {
    this->email = email;
    this->nome = nome;
    this->senha = senha;
}
