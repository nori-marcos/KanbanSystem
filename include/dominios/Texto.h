#ifndef KANBANSYSTEM_TEXTO_H
#define KANBANSYSTEM_TEXTO_H

#include <stdexcept>
#include <string>

using namespace std;

class Texto {
private:
    ///Atributo que armazena o texto
    string texto;

    ///Valida o texto passado por parâmetro
    /// @param texto texto a ser validado.
    static void validarTexto(const string &texto);

    ///Valida o caracter passado por parâmetro, que deve ser letra maiúscula, letra minúscula, dígito, sinal de pontuação ou espaço em branco.
    static void validarCaracterEAcentuacao(const char &caracter);

    ///Valida se existe espaço em branco seguido.
    static void validarEspacoEmBrancoSeguidos(const char &caracter1, const char &caracter2);

    ///Valida se existe pontuação seguida.
    static void validarPontuacoesSeguidas(const char &caracter1, const char &caracter2);

public:

    ///Inicializa o objeto com o texto passado por parâmetro.
    ///Regras de formato:
    /// - Deve ser composto por 5 a 30 caracteres.
    /// - Deve ser composto por letras maiúsculas, letras minúsculas, dígitos, sinais de pontuação ou espaço em branco.
    /// - Não deve haver espaços em branco seguidos.
    /// - Não deve haver pontuações seguidas.
    /// - Não deve haver acentuação.
    /// - Primeira letra do texto deve ser maiúscula.
    /// -Primeiro caracter após pontuação deve ser maiúsculo.
    Texto(const string &texto);

    Texto() = default;

    ///Atribui um novo texto ao objeto.
    void setTexto(const string &newTexto) {
        validarTexto(newTexto);
        this->texto = newTexto;
    };

    ///Retorna o texto do objeto.
    string getTexto() const {
        return texto;
    };
};

#endif //KANBANSYSTEM_TEXTO_H
