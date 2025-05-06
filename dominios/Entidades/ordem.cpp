#include "ordem.hpp"
#include <string>

Ordem::Ordem(const string& codigo, int quantidade, const string& codNegociacao, float preco, const string& data){
    this->codigo.Set(codigo);
    this->quantidade.Set(quantidade);
    this->negociacao.Set(codNegociacao);
    this->preco.Set(preco);
    this->data.Set(data);
}

Ordem::Ordem() {
    this->codigo = Codigo();
    this->quantidade = Quantidade();
    this->negociacao = codigoNegocio();
    this->preco = Dinheiro();
    this->data = Data();
}

void Ordem::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
}

void Ordem::setCodigo(const string& codigo) {
    this->codigo.Set(codigo);
}

void Ordem::setQuantidade(const Quantidade& quantidade){
    this->quantidade = quantidade;
}

void Ordem::setQuantidade(int quantidade) {
    this->quantidade.Set(quantidade);
}

void Ordem::setCodigoNegocio(const codigoNegocio& negociacao) {
    this->negociacao = negociacao;
}

void Ordem::setCodigoNegocio(const string& negociacao) {
    this->negociacao.Set(negociacao);
}

void Ordem::SetData(const string& data) {
    this->data.Set(data);
}

void Ordem::SetData(const Data& data) {
    this->data = data;
}

void Ordem::setPreco(const Dinheiro& preco) {
    this->preco = preco;
}

void Ordem::setPreco(float preco) {
    this->preco.Set(preco);
}
