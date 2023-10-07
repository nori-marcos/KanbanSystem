#ifndef KANBANSYSTEM_TEXTO_H
#define KANBANSYSTEM_TEXTO_H

#include <stdexcept>
#include <string>

using namespace std;

class Texto {
private:
    string texto;

    static void validarTexto(const string &texto);

    static void validarCaracterEAcentuacao(const char &caracter);

    static void validarEspacoEmBrancoSeguidos(const char &caracter1, const char &caracter2);

    static void validarPontuacoesSeguidas(const char &caracter1, const char &caracter2);

public:

        Texto(const string& texto);

        void setTexto(string texto) {
            validarTexto(texto);
            this->texto = texto;
        };

        string getTexto() const {
            return texto;
        };
};


#endif //KANBANSYSTEM_TEXTO_H
