#include "include/controladoras/CntrISAutenticacao.h"

Conta CntrISAutenticacao::autenticar(const Email &email, const Senha &senha) {
    Conta conta;
    Conta resposta;

    conta.setEmail(email.getValor());
    conta.setSenha(senha.getValor());
    resposta = ContainerConta::pesquisar(conta);

    return resposta;
}
