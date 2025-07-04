#pragma once
#include <iostream>
#include "../interfaces/ISC.hpp"

using namespace std;

class StubISAccount : public ISAccount {
    const static int  TRIGGER_FALHA = 111222333;
    const static int TRIGGER_ERRO_SISTEMA = 123456789;

    public:
     bool create(const Account&) ;
     bool read(Account*) ;
     bool update(const Account&) ;
     bool remove(const Cpf&) ;
};

