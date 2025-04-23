#pragma once

#include "../dinheiro/dinheiro.hpp"
#include "../quantidade/quantidade.hpp"
#include "../codigo/codigo.hpp"
#include "../negociarCode/negociarCode.hpp"

class Ordem {
    private:
        Codigo        codigo;
        Quantidade    quantidade;
        codigoNegocio negociacao;
        Dinheiro      preco;

    public:
        Ordem(int codigo, int quantidade, const string& codNegociacao, float preco);
        void setCodigo(const Codigo&);
        void setCodigo(int);

        void setQuantidade(const Quantidade&);
        void setQuantidade(int);

        void setCodigoNegocio(const codigoNegocio&);
        void setCodigoNegocio(const string&);

        void setPreco(const Dinheiro&);
        void setPreco(float);

        inline Quantidade&     getQuantidade();
        inline Codigo&         getCodigo();
        inline codigoNegocio&  getNegociacao();
        inline Dinheiro&       getPreco();
};

Quantidade& Ordem::getQuantidade() {
    return this->quantidade;
}

Codigo& Ordem::getCodigo(){
    return this->codigo;
}

codigoNegocio& Ordem::getNegociacao() {
    return this->negociacao;
}

Dinheiro& Ordem::getPreco() {
    return  this->preco;
}
