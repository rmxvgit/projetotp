
#pragma once
#include "../interfaces/IAC.hpp"
#include "../interfaces/ISA.hpp"
#include "../Entidades/account.hpp"
#include "../container/ContAccount.hpp"
#include <iostream>

using namespace std;

class CntrIAAccount : public IAAccount {
   private :
    const static int CREATE = 1;
    const static int READ   = 2;
    const static int UPDATE = 3;
    const static int REMOVE = 4;
    const static int RETURN = 5;

        ISAccount *cntrISAccount;


    public :

        void create();
        void execute(Cpf&) ;
        void setCntrAccount(ISAccount *);


};

inline void CntrIAAccount :: setCntrAccount(ISAccount *cntrAccount){
    this->cntrISAccount = cntrAccount;
};

