#include "quantidade.hpp"

using namespace std;

int Quantidade::getQuantidade(){
    return this->quantidade;
}

bool Quantidade::validate(int quantidade){
    if (1 <= quantidade && quantidade <= 1000000)  return true;
    return false;
}

bool Quantidade::setQuantidade(int quantidade){
    bool isValid = Quantidade::validate(quantidade);
    if (isValid){
        this->quantidade = quantidade;
    }
    return isValid;
}
