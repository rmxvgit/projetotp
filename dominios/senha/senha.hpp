#pragma once

#include <string>

using namespace std;


class Senha{
    private:
        string password;
        bool validate(string);
    public:
        string getSenha();
        bool setSenha(string);
};
