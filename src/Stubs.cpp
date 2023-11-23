#include "include/Stubs.h"

const string StubISAutenticacao::TRIGGER_FALHA = "aluno.com.br";
const string StubISAutenticacao::TRIGGER_ERRO_SISTEMA = "erro de sistema";

bool StubISAutenticacao::autenticar(const Email &email, const Senha &senha) {

    cout << endl << "StubISAutenticacao::autenticar" << endl;

    cout << "Email: " << email.EMAIL_INVALIDO << endl;
    cout << "Senha: " << senha.getSenha() << endl;

    if (email.EMAIL_INVALIDO == TRIGGER_FALHA) return false;

    if (email.EMAIL_INVALIDO == TRIGGER_ERRO_SISTEMA) throw runtime_error("Erro de sistema");

    return true;
}
