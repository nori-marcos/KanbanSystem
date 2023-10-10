#include "include/entidades/Cartao.h"

Cartao::Cartao(const Codigo& codigo, const Texto& nome, const Texto& descricao, const Coluna& coluna) {
    this->codigo = codigo;
    this->nome = nome;
    this->descricao = descricao;
    this->coluna = coluna;
}

