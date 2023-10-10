#include <list>
#include <string>
#include "include/dominios/Senha.h"

Senha::Senha(const string& senha) {
    validarSenha(senha);
    this->senha = senha;
}

void Senha::validarSenha(const string& senha) {
    size_t tamanhoSenha = senha.length();
    list<char> caracteresValidados;
    bool temMaiuscula = false;
    bool temMinuscula = false;
    bool temDigito = false;
    bool temPontuacao = false;
    string pontosValidos = ".,;?!";

    if (tamanhoSenha != 5) {
        throw invalid_argument("A senha deve conter 5 caracteres");
    }

    for (size_t i = 0; i < tamanhoSenha; i++) {
        char caracter = senha[i];

        validarCaracter(caracter);

        if (isalpha(caracter) && isupper(caracter)) {
            temMaiuscula = true;
        } else if (isalpha(caracter) && islower(caracter)) {
            temMinuscula = true;
        } else if (isdigit(caracter)) {
            temDigito = true;
        } else {
            for (char pontosValido: pontosValidos) {
                if (pontosValido == caracter) {
                    temPontuacao = true;
                }
            }
        }

        for (char caracterValidado: caracteresValidados) {
            if (caracterValidado == caracter) {
                throw invalid_argument("Caracter duplicado");
            }
        }
    }

    if (!temMaiuscula || !temMinuscula || !temDigito || !temPontuacao) {
        throw invalid_argument(
                "Verifique se a senha contém pelo menos uma letra maiúscula, uma letra minúscula, um dígito e um caracter de pontuação");
    }
}

void Senha::validarCaracter(const char& caracter) {
    string caracteresValidos = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,;?!";

    bool caracterValidoEncontrado = false;

    for (char caracteresValido: caracteresValidos) {
        if (caracteresValido == caracter) {
            caracterValidoEncontrado = true;
        }
    }

    if (!caracterValidoEncontrado) {
        throw invalid_argument("Caracter invalido");
    }
}
