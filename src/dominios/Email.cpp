#include "include/dominios/Email.h"

Email::Email(const string &email) {
    validarEmail(email);
    this->email = email;
}

void Email::validarEmail(const string &email) {
    size_t tamanhoEmail = email.length();
    string nome;
    string dominio;
    bool nomeCompletado = false;

    for (size_t i = 0; i < tamanhoEmail; i++) {
        validarCaracter(email[i]);

        if (i < tamanhoEmail - 1) {
            validarPontosSeguidos(email[i], email[i + 1]);
        }

        if (!nomeCompletado) {
            if (email[i] == '@') {
                nomeCompletado = true;
            } else {
                nome += email[i];
            }
        }

        if (nomeCompletado) {
            dominio += email[i];
        }

    }

    validarNome(nome);
    validarDominio(dominio);
}

void Email::validarCaracter(const char &caracter) {
    string caracteresValidos = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@._-";

    if (caracter == ' ') {
        throw invalid_argument("Email não pode conter espaços");
    }

    for (char valido: caracteresValidos) {
        if (caracter == valido) {
            return;
        }
    }

    throw invalid_argument("Email não pode conter caracteres especiais");

}

void Email::validarNome(const string &nome) {
    size_t tamanhoNome = nome.length();

    if (tamanhoNome < 2) {
        throw invalid_argument("Email deve ter no mínimo 2 caracteres antes do @");
    }

    if (tamanhoNome > 10) {
        throw invalid_argument("Email deve ter no máximo 10 caracteres antes do @");
    }

    if (nome[0] == '.' || nome[tamanhoNome - 1] == '.') {
        throw invalid_argument("Nome antes do '@' não pode começar ou terminar com ponto");
    }
}

void Email::validarDominio(const string &dominio) {
    size_t tamanhoDominio = dominio.length();

    if (tamanhoDominio < 3) {
        throw invalid_argument("Email deve ter no mínimo 2 caracteres após o @");
    }

    if (tamanhoDominio > 21) {
        throw invalid_argument("Email deve ter no máximo 20 caracteres após o @");
    }

    if (dominio[1] == '.' || dominio[tamanhoDominio - 1] == '.') {
        throw invalid_argument("Domínio depois do '@' não pode começar ou terminar com ponto");
    }
}

void Email::validarPontosSeguidos(const char &caracter1, const char &caracter2) {
    if (caracter1 == '.' && caracter2 == '.') {
        throw invalid_argument("Email não pode conter pontos seguidos");
    }
}
