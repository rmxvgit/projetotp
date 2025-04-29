#include <stdexcept>
#include "codigo.hpp"


void Codigo::validar(const string& codigo) {
    if (codigo.length() !=  LIMITE){
        throw invalid_argument("codigo inválido: tamanho incorreto");
    }
    for (const char& i : codigo) {
        if (i < '0' || i > '9') {
            throw invalid_argument("codigo inválido: caracter não numérico.");
        }
    }
}

void Codigo::Set(const string& codigo) {
    validar(codigo);
    this->valor = codigo;
}
