//Marcos Noriyuki Miyata 18/0126890
//Luis Henrique Wiltgen de Toledo 22/1003968

#ifndef KANBANSYSTEM_TEXTO_H
#define KANBANSYSTEM_TEXTO_H

#include <stdexcept>
#include <string>

using namespace std;

///Classe que representa o texto de um cartão, de uma coluna e de um quadro.
///Regras de formato:
/// - Deve ser composto por 5 a 30 caracteres.
/// - Deve ser composto por letras maiúsculas, letras minúsculas, dígitos, sinais de pontuação ou espaço em branco.
/// - Não deve haver espaços em branco seguidos.
/// - Não deve haver pontuações seguidas.
/// - Não deve haver acentuação.
/// - Primeira letra do texto deve ser maiúscula.
/// - Primeiro caracter após pontuação deve ser maiúsculo.
class Texto {
private:
    string texto;

    static void validarTexto(const string &texto);

    static void validarCaracterEAcentuacao(const char &caracter);

    static void validarEspacoEmBrancoSeguidos(const char &caracter1, const char &caracter2);

    static void validarPontuacoesSeguidas(const char &caracter1, const char &caracter2);

public:

    ///Inicializa o objeto com o texto passado por parâmetro.
    Texto(const string &texto);

    ///Inicializa o objeto com o texto vazio.
    Texto() = default;

    ///Atribui um novo texto ao objeto.
    void setValor(const string &newTexto) {
        validarTexto(newTexto);
        this->texto = newTexto;
    };

    ///Retorna o texto do objeto.
    string getValor() const {
        return texto;
    };
};

#endif //KANBANSYSTEM_TEXTO_H
