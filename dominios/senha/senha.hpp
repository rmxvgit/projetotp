#pragma once

#include <string>

using namespace std;


class Senha{
    private:
        string password;

        bool validate(const string&);

    public:
        Senha();
        Senha(const string&);

        string Get();
        bool Set(const string&);
};
