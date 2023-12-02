#include "include/controladoras/CntrISAutenticacao.h"

Conta CntrISAutenticacao::autenticar(const Email &email, const Senha &senha) {
    Conta conta;
    Conta resposta;

    try {
        conta.setEmail(email.getValor());
        conta.setSenha(senha.getValor());
        resposta = ContainerConta::pesquisar(conta);
    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}
