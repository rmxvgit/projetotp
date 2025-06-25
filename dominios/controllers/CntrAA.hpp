#pragma once

#include "../interfaces/IAA.hpp"
#include "../interfaces/ISA.hpp"
#include "../cpf/cpf.hpp"

#include <stdexcept>
#include <iostream>

using namespace std;

// ---------------------------------------------------------------------------------
// Declara��o de classe controladora e implementa��o de m�todo.

class CntrAAutenticacao:public IAA {
private:
    ISA *cntrISAutenticacao;        // Refer�ncia para servidor.
public:
    bool autenticar(Cpf*);
    void setController(ISA*);
};

void inline CntrAAutenticacao::setController(ISA *cntrISAutenticacao){
        this->cntrISAutenticacao = cntrISAutenticacao;
}