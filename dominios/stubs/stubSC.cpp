#include <iostream>
#include "../interfaces/IAC.hpp"
#include "../interfaces/ISA.hpp"
#include "../stubs/stubSC.hpp"

bool StubISAccount::create(Account &account) {
    cout << "ISAccount :: create" << endl;

    bool result = true;

    switch (account.getCpf().GetNum()) {
        case TRIGGER_FALHA:
            result = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de Sistema");
            break;
        default:
            break;
    }

    return result;
}

bool ISAccount::read(Account* account) {
    cout << "ISAccount :: read" << endl;

    bool result = true;

    switch (account->getCpf().GetNum()) {
        case TRIGGER_FALHA:
            result = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de Sistema");
            break;
        default:
            break;
    }

    return result;
}

bool ISAccount::edit(const Account& account) {
    cout << "ISAccount :: edit" << endl;

    bool result = true;

    switch (account.getCpf().GetNum()) {
        case TRIGGER_FALHA:
            result = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de Sistema");
            break;
        default:
            break;
    }

    return result;
}

bool ISAccount::remove(const Cpf& cpf) {
    cout << "ISAccount :: remove" << endl;

    bool result = true;

     switch (cpf.GetNum()) {
        case TRIGGER_FALHA:
            result = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de Sistema");
            break;
        default:
            break;
    }

    return result;

}
