#ifndef SENHA_H
#define SENHA_H

#include <stdexcept>
#include <string>

using namespace std;

class Senha {
private:
    ///Atributo que armazena a senha
    string senha;

    ///Valida a senha passada por parâmetro, que deve ser composta por 5 caracteres, não deve haver caracteres repetidos,
    ///deve ter pelo menos uma letra maiúscula, uma letra minúscula, um dígito e um sinal de pontuação.
    /// @param senha senha a ser validada.
    static void validarSenha(const string &newSenha);

    ///Valida o caracter passado por parâmetro, que deve ser letra maiúscula, letra minúscula, dígito ou sinal de pontuação.
    /// @param caracter caracter a ser validado.
    static void validarCaracter(const char &caracter);

public:
    ///Inicializa o objeto com a senha passada por parâmetro.
    ///Regras de formato:
    /// - Deve ser composta por 5 caracteres.
    /// - Deve ser composta por letras maiúsculas, letras minúsculas, dígitos e sinais de pontuação.
    /// - Deve ter pelo menos uma letra maiúscula, uma letra minúscula, um dígito e um sinal de pontuação.
    /// - Não deve haver caracteres repetidos.
    Senha(const string &senha);

    Senha() = default;

    ///Retorna a senha do objeto.
    string getSenha() const {
        return senha;
    }

    ///Atribui uma nova senha ao objeto.
    void setSenha(const string &newSenha) {
        validarSenha(newSenha);
        this->senha = newSenha;
    };
};

#endif // SENHA_H
