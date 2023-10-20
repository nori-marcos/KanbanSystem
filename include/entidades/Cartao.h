//Marcos Noriyuki Miyata 18/0126890
//Luis Henrique Wiltgen de Toledo 22/1003968

#ifndef KANBANSYSTEM_CARTAO_H
#define KANBANSYSTEM_CARTAO_H


#include "include/dominios/Texto.h"
#include "include/dominios/Coluna.h"
#include "include/dominios/Codigo.h"

///Classe que representa o cartão de um quadro. O cartão representa a tarefa criada e a ser executada pelo usuário.
///Regras de formato:
/// - Código: "AB12".
/// - Nome: "Nome da tarefa".
/// - Descrição: "Descrição da tarefa".
/// - Coluna: "SOLICITADO", "EM EXECUÇÃO" ou "CONCLUÍDO".
class Cartao {
private:
    Codigo codigo;

    Texto nome;

    Texto descricao;

    Coluna coluna;

public:
    ///Inicializa o objeto com os valores passados por parâmetro
    Cartao(const Codigo &codigo, const Texto &nome, const Texto &descricao, const Coluna &coluna);

    ///Inicializa o objeto com os valores vazios
    Cartao() = default;

    ///Retorna o código do cartão
    Codigo getCodigo() const {
        return codigo;
    };

    ///Atribui um novo código ao cartão
    void setCodigo(Codigo &newCodigo) {
        this->codigo = newCodigo;
    };

    ///Retorna o nome do cartão
    Texto getNome() const {
        return nome;
    };

    ///Atribui um novo nome ao cartão
    void setNome(Texto &newNome) {
        this->nome = newNome;
    };

    ///Retorna a descrição do cartão
    Texto getDescricao() const {
        return descricao;
    };

    ///Atribui uma nova descrição ao cartão
    void setDescricao(Texto &newDescricao) {
        this->descricao = newDescricao;
    };

    ///Retorna a coluna do cartão
    Coluna getColuna() const {
        return coluna;
    };

    ///Atribui uma nova coluna ao cartão
    void setColuna(Coluna &newColuna) {
        this->coluna = newColuna;
    };
};

#endif //KANBANSYSTEM_CARTAO_H
