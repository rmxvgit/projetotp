#include "conta.hpp"

Conta::Conta(){}

Conta::Conta(
    const string& name_str,
    const string& cpf_str,
    const string& senha_str
): name(name_str), cpf(cpf_str), senha(senha_str) {}
