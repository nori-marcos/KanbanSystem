#ifndef KANBANSYSTEM_CARTAO_H
#define KANBANSYSTEM_CARTAO_H


#include "include/dominios/Texto.h"
#include "include/dominios/Coluna.h"
#include "include/dominios/Codigo.h"

class Cartao {
private:
    ///Atributo que armazena o código do cartão
    Codigo codigo;

    ///Atributo que armazena o nome do cartão
    Texto nome;

    ///Atributo que armazena a descrição do cartão
    Texto descricao;

    ///Atributo que armazena a coluna do cartão
    Coluna coluna;

public:
    ///Inicializa o objeto com os valores passados por parâmetro
    Cartao(const Codigo& codigo, const Texto& nome, const Texto& descricao, const Coluna& coluna);

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
