#pragma once

#include "../dinheiro/dinheiro.hpp"
#include "../quantidade/quantidade.hpp"
#include "../codigo/codigo.hpp"
#include "../negociarCode/negociarCode.hpp"
#include "../data/data.hpp"

class Ordem {
    private:
        Codigo        codigo;
        Data          data;
        Quantidade    quantidade;
        codigoNegocio negociacao;
        Dinheiro      preco;

    public:
        Ordem(const string&, int, const string&, float, const string&);
        void setCodigo(const Codigo&);
        void setCodigo(const string&);

        void setQuantidade(const Quantidade&);
        void setQuantidade(int);

        void setCodigoNegocio(const codigoNegocio&);
        void setCodigoNegocio(const string&);

        void setPreco(const Dinheiro&);
        void setPreco(float);

        void SetData(const Data& data);
        void SetData(const string& data);

        inline Quantidade&     getQuantidade();
        inline Codigo&         getCodigo();
        inline codigoNegocio&  getNegociacao();
        inline Dinheiro&       getPreco();
        inline Data&           getData();
};

Quantidade& Ordem::getQuantidade() {
    return this->quantidade;
}

Codigo& Ordem::getCodigo(){
    return this->codigo;
}

Data& Ordem::getData() {
    return this->data;
}

codigoNegocio& Ordem::getNegociacao() {
    return this->negociacao;
}

Dinheiro& Ordem::getPreco() {
    return  this->preco;
}
