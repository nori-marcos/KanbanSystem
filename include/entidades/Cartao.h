#ifndef KANBANSYSTEM_CARTAO_H
#define KANBANSYSTEM_CARTAO_H


#include "include/dominios/Texto.h"
#include "include/dominios/Coluna.h"
#include "include/dominios/Codigo.h"

class Cartao {
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Coluna coluna;

public:
    Cartao(const Codigo& codigo, const Texto& nome, const Texto& descricao, const Coluna& coluna);

    Cartao() = default;

    Codigo getCodigo() const {
        return codigo;
    };

    void setCodigo(Codigo &newCodigo) {
        this->codigo = newCodigo;
    };

    Texto getNome() const {
        return nome;
    };

    void setNome(Texto &newNome) {
        this->nome = newNome;
    };

    Texto getDescricao() const {
        return descricao;
    };

    void setDescricao(Texto &newDescricao) {
        this->descricao = newDescricao;
    };

    Coluna getColuna() const {
        return coluna;
    };

    void setColuna(Coluna &newColuna) {
        this->coluna = newColuna;
    };
};

#endif //KANBANSYSTEM_CARTAO_H
