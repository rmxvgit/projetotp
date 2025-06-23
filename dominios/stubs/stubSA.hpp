#pragma once

#include "../interfaces/IAA.hpp"
#include "../cpf/cpf.hpp"
#include "../password/password.hpp"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;
class StubSA:public ISA{

private:

    const static int TRIGGER_FALHA        = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

public:
    bool autenticar(Cpf&, Password&);
};  
