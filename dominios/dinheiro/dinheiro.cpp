#include "dinheiro.hpp"

float Dinheiro::getDinheiro(){
    return this->dinheiro;
}

 void Dinheiro::validarDinheiro(float dinheiro){
     if(dinheiro < 0.01 || dinheiro > 1000000.00){
        throw invalid_argument("valor do dinheiro invalido");
     }

 }

 void Dinheiro::setDinheiro(float dinheiro){
    validarDinheiro(dinheiro);
    this->dinheiro = dinheiro;

 }
