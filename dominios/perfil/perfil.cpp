#include "Perfil.hpp"


Perfil::Perfil() : tipo(Tipo::CONSERVADOR) {}

Perfil::Perfil(Tipo tipo) : tipo(tipo) {}

Perfil::Tipo Perfil::getTipo(){
    return tipo;
}

void Perfil::setTipo(Tipo tipo) {
    this->tipo = tipo;
}

std::string Perfil::getTipoString(){
    switch (tipo) {
        case Tipo::CONSERVADOR:
            return "Conservador";
        case Tipo::MODERADO:
            return "Moderado";
        case Tipo::AGRESSIVO:
            return "Agressivo";
        default:
            return "Desconhecido";
    }
}
