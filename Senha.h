#ifndef SENHA_H
#define SENHA_H

#include <stdexcept>
#include <string>

using namespace std;

class Senha {
private:
    string senha;

    static void validarSenha(const string &newSenha);

    static void validarCaracter(const char &caracter);

public:
    Senha(const string &senha);

    Senha() = default;

    string getSenha() const {
        return senha;
    }

    void setSenha(const string &newSenha) {
        validarSenha(newSenha);
        this->senha = newSenha;
    };
};

#endif // SENHA_H
