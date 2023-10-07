#ifndef KANBANSYSTEM_CODIGO_H
#define KANBANSYSTEM_CODIGO_H

#include <string>
#include <stdexcept>

using namespace std;

class Codigo {
private:
    /***
    *@param codigo é a entrada
    */
    string codigo;

    static void validar(string &codigo);

public:
///Inicializa o objeto com o código passado por parâmetro
    Codigo(string codigo);

///Atribui um novo código ao objeto
    void setCodigo(string codigo) {
        validar(codigo);
        this->codigo = codigo;
    };

///Retorna o código do objeto
    string getCodigo() const {
        return codigo;
    };
};

#endif //KANBANSYSTEM_CODIGO_H
