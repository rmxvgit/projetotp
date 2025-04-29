
#include <stdexcept>
#include "codigo.hpp"
#pragma once


void Codigo::validar(const string& codigo) {
    for (const char& i : codigo) {
        if (i < '0' || i > '9') {
            throw invalid_argument("codigo inválido caracter não numérico");
        }
    }
}

void Codigo::Set(const string& codigo) {
    validar(codigo);
    this->valor = codigo;
}
