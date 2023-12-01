#include "include/dominios/Texto.h"

Texto::Texto(const string& texto) {
    validarTexto(texto);
    this->texto = texto;
}

void Texto::validarTexto(const string& texto) {

    size_t tamanho = texto.size();
    string caracteresMaisculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    bool comecaComLetraMaiscula = false;

    if (tamanho < 5 || tamanho > 30) {
        throw invalid_argument(texto.c_str() + string(" não possui tamanho válido. Texto deve ter entre 5 e 30 caracteres"));
    }

    for (size_t i = 0; i < tamanho; i++) {
        char caracter = texto[i];
        validarCaracterEAcentuacao(caracter);

        if (i < tamanho - 1) {
            validarEspacoEmBrancoSeguidos(caracter, texto[i + 1]);
            validarPontuacoesSeguidas(caracter, texto[i + 1]);
        }

        if (i == 0) {
            for (char caracterMaiscula: caracteresMaisculas) {
                if (caracterMaiscula == caracter) {
                    comecaComLetraMaiscula = true;
                }
            }
        }
    }

    if (!comecaComLetraMaiscula) {
        throw invalid_argument(texto.c_str() + string(" não começa com letra maiúscula"));
    }
}

void Texto::validarCaracterEAcentuacao(const char& caracter) {
    string caracteresValidos = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,;?! ";
    bool caracterValidoEncontrado = false;

    for (char caracteresValido: caracteresValidos) {
        if (caracteresValido == caracter) {
            caracterValidoEncontrado = true;
        }
    }

    if (!caracterValidoEncontrado) {
        throw invalid_argument("Caracter inválido");
    }
}

void Texto::validarEspacoEmBrancoSeguidos(const char& caracter1, const char& caracter2) {
    if (caracter1 == ' ' && caracter2 == ' ') {
        throw invalid_argument("Espaços em branco não podem ser seguidos");
    }
}

void Texto::validarPontuacoesSeguidas(const char& caracter1, const char& caracter2) {
    string pontuacoesValidas = ".,;?!";
    bool caracter1EhPontuacao = false;
    bool caracter2EhPontuacao = false;

    for (char pontuacaoValida: pontuacoesValidas) {
        if (pontuacaoValida == caracter1) {
            caracter1EhPontuacao = true;
        }

        if (pontuacaoValida == caracter2) {
            caracter2EhPontuacao = true;
        }
    }

    if (caracter1EhPontuacao && caracter2EhPontuacao) {
        throw invalid_argument("Pontuações não podem ser seguidas");
    }
}