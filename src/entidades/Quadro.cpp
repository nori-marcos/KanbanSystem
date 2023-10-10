#include "include/entidades/Quadro.h"

Quadro::Quadro(const Codigo &codigo, const Texto &nome, const Texto &descricao, const Limite &limite) {
    this->codigo = codigo;
    this->nome = nome;
    this->descricao = descricao;
    this->limite = limite;
}
