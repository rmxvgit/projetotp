#include "account.hpp"

Account::Account(){}

Account::Account(
    const string& name_str,
    const string& cpf_str,
    const string& password_str
): name(name_str), cpf(cpf_str), password(password_str) {}
