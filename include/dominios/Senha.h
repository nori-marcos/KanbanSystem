//Marcos Noriyuki Miyata 18/0126890
//Gustavo Vieira do Nascimento 22/2012872

#ifndef SENHA_H
#define SENHA_H

#include <stdexcept>
#include <string>

using namespace std;

///Classe que representa a senha do usuário, usada na autenticação do sistema.
///Regras de formato:
/// - Deve ser composta por 5 caracteres.
/// - Deve ser composta por letras maiúsculas, letras minúsculas, dígitos e sinais de pontuação.
/// - Deve ter pelo menos uma letra maiúscula, uma letra minúscula, um dígito e um sinal de pontuação.
/// - Não deve haver caracteres repetidos.
class Senha {
private:
    string senha;

    static void validarSenha(const string &newSenha);

    static void validarCaracter(const char &caracter);

public:
    ///Inicializa o objeto com a senha passada por parâmetro.
    Senha(const string &senha);

    ///Inicializa o objeto com a senha vazia.
    Senha() = default;

    ///Retorna a senha do objeto.
    string getValor() const {
        return senha;
    }

    ///Atribui uma nova senha ao objeto.
    void setValor(const string &newSenha) {
        validarSenha(newSenha);
        this->senha = newSenha;
    };
};

#endif // SENHA_H
