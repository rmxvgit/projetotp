#include "carteira.hpp"

//////Codigo
void Carteira::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}
Codigo Carteira::getCodigo(){
    return codigo;
}

//////Nome
void Carteira::setName(const Name& name){
    this->name = name;
}
Name Carteira::getName(){
    return name;
}

/////Perfil
void Carteira::setPerfil(const Perfil& perfil){
    this->perfil = perfil;
}
Perfil Carteira::getPerfil() const{
    return perfil;
}


