#include "dinheiro.hpp"

float Dinheiro::getDinheiro(){
    return this->dinheiro;
}

 bool Dinheiro::validarDinheiro(float dinheiro){
     if(dinheiro > 0.01 && dinheiro < 1000000.00){
        return true;
     }else{
        return false;
     }

 }

 bool Dinheiro::setDinheiro(float dinheiro){
    bool valid = Dinheiro::validarDinheiro(dinheiro);

    if(valid){
        this->dinheiro = dinheiro;
        return true;
    }else{
        return false;
    }

 }
