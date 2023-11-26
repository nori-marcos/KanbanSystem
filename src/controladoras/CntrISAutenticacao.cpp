#include "include/controladoras/CntrISAutenticacao.h"

bool CntrISAutenticacao::autenticar(const Email &email, const Senha &senha) {
    Conta *conta = new Conta();
    bool resposta = true;

    cout << endl << "CntrISAutenticacao::autenticar" << endl;
    cout << "Email: " << email.getValor() << endl;
    cout << "Senha: " << senha.getValor() << endl;

    try {
        conta->setEmail(email.getValor());
        conta->setSenha(senha.getValor());
        resposta = containerConta->pesquisar(conta);

    } catch (const invalid_argument &exception) {
        cout << endl << exception.what() << endl;
    }

    return resposta;
}
