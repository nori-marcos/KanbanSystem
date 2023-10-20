//Marcos Noriyuki Miyata 18/0126890
//Delma Nogueira  de Jesus 22/2035705

#ifndef KANBANSYSTEM_QUADRO_H
#define KANBANSYSTEM_QUADRO_H


#include "include/dominios/Texto.h"
#include "include/dominios/Limite.h"
#include "include/dominios/Codigo.h"

///Classe que representa o quadro de um usuário. O quadro é usado para organizar os cartões.
///Regras de formato:
/// - Código: "AB12".
/// - Nome: "Nome do quadro".
/// - Descrição: "Descrição do quadro".
/// - Limite: 5, 10, 15 ou 20.
class Quadro {
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Limite limite;

public:
    ///Inicializa o objeto com os valores passados por parâmetro.
    Quadro(const Codigo &codigo, const Texto &nome, const Texto &descricao, const Limite &limite);

    ///Inicializa o objeto com os valores vazios.
    Quadro() = default;

    ///Atribui um novo código ao objeto.
    void setCodigo(const Codigo &newCodigo) {
        this->codigo = newCodigo;
    };

    ///Atribui um novo nome ao objeto.
    void setNome(const Texto &newNome) {
        this->nome = newNome;
    };

    ///Atribui uma nova descrição ao objeto.
    void setDescricao(const Texto &newDescricao) {
        this->descricao = newDescricao;
    };

    ///Atribui um novo limite ao objeto.
    void setLimite(const Limite &newLimite) {
        this->limite = newLimite;
    };

    ///Retorna o código do objeto.
    Codigo getCodigo() const {
        return codigo;
    };

    ///Retorna o nome do objeto.
    Texto getNome() const {
        return nome;
    };

    ///Retorna a descrição do objeto.
    Texto getDescricao() const {
        return descricao;
    };

    ///Retorna o limite do objeto.
    Limite getLimite() const {
        return limite;
    };

};


#endif //KANBANSYSTEM_QUADRO_H
