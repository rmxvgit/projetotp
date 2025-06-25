#include "../container/ContAccount.hpp"

bool ContAccount ::create(Account account){
    for(list<Account>::iterator element = container.begin() ; element != container.end() ; element++){
        if(element->getCpf().Get() == account.getCpf().Get())
        {
            return false;
        }
    }
    container.push_back(account);
    return true;
}

bool ContAccount ::read(Account *account){
    for(list<Account>::iterator element = container.begin() ; element != container.end() ; element++){
        if(element->getCpf().Get() == account.getCpf().Get())
        {
            *account = *element;
            return true;
        }
    }
    return false;
}

bool ContAccount ::update(Account account){
    for(list<Account>::iterator element = container.begin() ; element != container.end() ; element++){
        if(element->getCpf().Get() == account.getCpf().Get())
        {
            *element = account;
            return true;
        }
    }
    return false;
}

bool ContAccount ::remove(Cpf cpf){
    for(list<Account>::iterator element = container.begin() ; element != container.end() ; element++){
        if(element->getCpf().Get() == account.getCpf().Get())
        {
            container.erase(cpf);
            return true;
        }
    }
    return false;
}