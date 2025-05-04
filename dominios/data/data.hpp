#pragma once
#include <string>

using namespace std;

class Data{
    private:
        string data;
        void validarData(string);

    public:
        void Set(string);
        string Get();
};
