#include <iostream>
#include "../interfaces/ISC.hpp"

using namespace std;

class StubISAccount : public ISAccount {

    const static int TRIGGER_FALHA = 6789;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

    class ISAccount {

     bool create(const Account& );

     bool read(Account* );

     bool edit(const Account& );

     bool remove(const Cpf& );
};

};
