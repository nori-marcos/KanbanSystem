#ifndef KANBANSYSTEM_CODIGO_H
#define KANBANSYSTEM_CODIGO_H

#include <string>
#include <stdexcept>

using namespace std;

class Codigo {
private:
    string codigo;

    static void validar(string &codigo);

public:

    Codigo(string codigo);

    void setCodigo(string codigo) {
        validar(codigo);
        this->codigo = codigo;
    };

    string getCodigo() const {
        return codigo;
    };
};

#endif //KANBANSYSTEM_CODIGO_H