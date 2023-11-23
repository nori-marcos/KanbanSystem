#include "include/Stubs.h"

const string StubISAutenticacao::TRIGGER_FALHA = "aluno.com.br";
const string StubISAutenticacao::TRIGGER_ERRO_SISTEMA = "erro de sistema";

bool StubISAutenticacao::autenticar(const Email &email, const Senha &senha) {

    cout << endl << "StubISAutenticacao::autenticar" << endl;

    cout << "Email: " << email.getEmail() << endl;
    cout << "Senha: " << senha.getSenha() << endl;

    if (email.getEmail() == TRIGGER_FALHA) return false;

    if (email.getEmail() == TRIGGER_ERRO_SISTEMA) throw runtime_error("Erro de sistema");

    return true;
}
