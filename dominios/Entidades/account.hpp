#pragma once

#include "../cpf/cpf.hpp"
#include "../name/name.hpp"
#include "../password/password.hpp"

class Account{
    private :
        Cpf cpf;
        Name name;
        Password password;
    public :
        Account();
        Account(const string& name_str, const string& cpf_str,  const string& password_str);

        void setName(const Name& name);
        void setName(const string& name);

        void setCpf(const Cpf& cpf);
        void setCpf(const string& cpf);

        void setPassword(const Password& password);
        void setPassword(const string& password_str);

        Name&  getName();
        Cpf&   getCpf();
        Password& getPassword();
};

inline void Account :: setName(const Name& name){
    this->name = name;
}

inline void Account::setName(const string& name){
    this->name.Set(name);
}

inline void Account :: setCpf(const Cpf& cpf){
    this->cpf = cpf;
}

inline void Account :: setCpf(const string& cpf) {
    this->cpf.Set(cpf);
}

inline void Account :: setPassword(const Password& password){
    this->password = password;
}

inline void Account :: setPassword(const string& password){
    this->password.Set(password);
}

inline Name& Account :: getName(){
    return name;
}

inline Cpf& Account :: getCpf(){
    return cpf;
}

inline Password& Account :: getPassword(){
    return password;
}
