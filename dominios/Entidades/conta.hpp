#include "../cpf/cpf.hpp"
#include "../name/name.hpp"
#include "../senha/senha.hpp"

class Conta{
    private :
        Cpf cpf;
        Name name;
        Senha senha;
    public :
        Conta();
        Conta(const string& name_str, const string& cpf_str,  const string& senha_str);

        void setName(const Name& name);
        void setName(const string& name);

        void setCpf(const Cpf& cpf);
        void setCpf(const string& cpf);

        void setSenha(const Senha& senha);
        void setSenha(const string& senha_str);

        Name&  getName();
        Cpf&   getCpf();
        Senha& getSenha();
};

inline void Conta :: setName(const Name& name){
    this->name = name;
}

inline void Conta::setName(const string& name){
    this->name.Set(name);
}

inline void Conta :: setCpf(const Cpf& cpf){
    this->cpf = cpf;
}

inline void Conta :: setCpf(const string& cpf) {
    this->cpf.Set(cpf);
}

inline void Conta :: setSenha(const Senha& senha){
    this->senha = senha;
}

inline void Conta :: setSenha(const string& senha){
    this->senha.Set(senha);
}

inline Name& Conta :: getName(){
    return name;
}

inline Cpf& Conta :: getCpf(){
    return cpf;
}

inline Senha& Conta :: getSenha(){
    return senha;
}
