#include "ordem.hpp"

Ordem::Ordem(int codigo, int quantidade, const string& codNegociacao, float preco){
    this->codigo.setValor(codigo);
    this->quantidade.setQuantidade(quantidade);
    this->negociacao.setCod(codNegociacao);
    this->preco.setDinheiro(preco);
}

void Ordem::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
}

void Ordem::setCodigo(int codigo) {
    this->codigo.setValor(codigo);
}

void Ordem::setQuantidade(const Quantidade& quantidade){
    this->quantidade = quantidade;
}

void Ordem::setQuantidade(int quantidade) {
    this->quantidade.setQuantidade(quantidade);
}

void Ordem::setCodigoNegocio(const codigoNegocio& negociacao) {
    this->negociacao = negociacao;
}

void Ordem::setCodigoNegocio(const string& negociacao) {
    this->negociacao.setCod(negociacao);
}

void Ordem::setPreco(const Dinheiro& preco) {
    this->preco = preco;
}

void Ordem::setPreco(float preco) {
    this->preco.setDinheiro(preco);
}
