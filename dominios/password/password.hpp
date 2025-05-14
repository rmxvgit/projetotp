#pragma once

#include <string>

using namespace std;


class Password{
    private:
        string password;

        bool validate(const string&);

    public:
        Password();
        Password(const string&);

        string Get();
        void Set(const string&);
};
