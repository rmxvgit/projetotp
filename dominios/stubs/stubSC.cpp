
#include "../interfaces/IAC.hpp"
#include "../interfaces/ISA.hpp"
#include "../stubs/stubSC.hpp"
#include <iostream>

bool StubISAccount::create(const Account& account) {
    std::cout << "StubISAccount :: create" << std::endl;
    bool result = true;
    switch (account.getCpf().GetNum()) {
        case TRIGGER_FALHA:
            result = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw std::runtime_error("Erro de Sistema");
            break;
        default:
            break;
    }
    return result;
}

bool StubISAccount::read(Account* account) {
    std::cout << "StubISAccount :: read" << std::endl;
    bool result = true;
    switch (account->getCpf().GetNum()) {
        case TRIGGER_FALHA:
            result = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw std::runtime_error("Erro de Sistema");
            break;
        default:
            break;
    }
    return result;
}

bool StubISAccount::update(const Account& account) {
    std::cout << "StubISAccount :: update" << std::endl;
    bool result = true;
    switch (account.getCpf().GetNum()) {
        case TRIGGER_FALHA:
            result = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw std::runtime_error("Erro de Sistema");
            break;
        default:
            break;
    }
    return result;
}

bool StubISAccount::remove(const Cpf& cpf) {
    std::cout << "StubISAccount :: remove" << std::endl;
    bool result = true;
    switch (cpf.GetNum()) {
        case TRIGGER_FALHA:
            result = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw std::runtime_error("Erro de Sistema");
            break;
        default:
            break;
    }
    return result;
}
