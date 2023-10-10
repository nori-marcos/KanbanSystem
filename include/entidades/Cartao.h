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
    Cartao(const Codigo &codigo, const Texto &nome, const Texto &descricao, const Coluna &coluna);

    Cartao() = default;

    ///Retorna o código do cartão
    ///@return código do cartão
    Codigo getCodigo() const {
        return codigo;
    };

    ///Atribui um novo código ao cartão
    ///@param newCodigo código a ser atribuído ao cartão que precisa ser válido
    void setCodigo(Codigo &newCodigo) {
        this->codigo = newCodigo;
    };

    ///Retorna o nome do cartão
    ///@return nome do cartão
    Texto getNome() const {
        return nome;
    };

    ///Atribui um novo nome ao cartão
    ///@param newNome nome a ser atribuído ao cartão que precisa ser válido
    void setNome(Texto &newNome) {
        this->nome = newNome;
    };

    ///Retorna a descrição do cartão
    ///@return descrição do cartão
    Texto getDescricao() const {
        return descricao;
    };

    ///Atribui uma nova descrição ao cartão
    ///@param newDescricao descrição a ser atribuída ao cartão que precisa ser válida
    void setDescricao(Texto &newDescricao) {
        this->descricao = newDescricao;
    };

    ///Retorna a coluna do cartão
    ///@return coluna do cartão
    Coluna getColuna() const {
        return coluna;
    };

    ///Atribui uma nova coluna ao cartão
    ///@param newColuna coluna a ser atribuída ao cartão que precisa ser válida
    void setColuna(Coluna &newColuna) {
        this->coluna = newColuna;
    };
};

#endif //KANBANSYSTEM_CARTAO_H
