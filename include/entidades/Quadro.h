#ifndef KANBANSYSTEM_QUADRO_H
#define KANBANSYSTEM_QUADRO_H


#include "include/dominios/Texto.h"
#include "include/dominios/Limite.h"
#include "include/dominios/Codigo.h"

class Quadro {
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Limite limite;

public:
    Quadro(const Codigo &codigo, const Texto &nome, const Texto &descricao, const Limite &limite);

    Quadro() = default;

    void setCodigo(const Codigo &newCodigo) {
        this->codigo = newCodigo;
    };

    void setNome(const Texto &newNome) {
        this->nome = newNome;
    };

    void setDescricao(const Texto &newDescricao) {
        this->descricao = newDescricao;
    };

    void setLimite(const Limite &newLimite) {
        this->limite = newLimite;
    };

    Codigo getCodigo() const {
        return codigo;
    };

    Texto getNome() const {
        return nome;
    };

    Texto getDescricao() const {
        return descricao;
    };

    Limite getLimite() const {
        return limite;
    };

};


#endif //KANBANSYSTEM_QUADRO_H
