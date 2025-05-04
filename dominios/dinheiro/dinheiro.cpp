#include "dinheiro.hpp"

#include <stdexcept>
using namespace std;

float Dinheiro::Get(){
    return this->dinheiro;
}

 void Dinheiro::validarDinheiro(float dinheiro){
     if(dinheiro < 0.01 || dinheiro > 1000000.00){
        throw invalid_argument("valor do dinheiro invalido");
     }

 }

 void Dinheiro::Set(float dinheiro){
    validarDinheiro(dinheiro);
    this->dinheiro = dinheiro;

 }
