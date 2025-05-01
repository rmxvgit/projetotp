#include "quantidade.hpp"
#include <stdexcept>

int Quantidade::getQuantidade(){
    return this->quantidade;
}

bool Quantidade::validate(int quantidade){
    if (1 <= quantidade && quantidade <= 1000000)  return true;
    return false;
}

void Quantidade::setQuantidade(int quantidade){
    bool isValid = Quantidade::validate(quantidade);
    if (!isValid){
        throw std::invalid_argument("quantidade inválida");
    }
    this->quantidade = quantidade;
}
