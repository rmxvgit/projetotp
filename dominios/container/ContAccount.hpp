#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <stdexcept>

#include "../command/CommAccount.hpp"


class ContAccount {
    private :
        list <Account> container ;
    public :

        bool create(Account);
        bool read (Account *);
        bool update(Account);
        bool remove(Cpf);
};


