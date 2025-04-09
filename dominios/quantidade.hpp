#pragma once

#include <string>

using namespace std;

class Quantidade{
    private:
        int quantidade;
        bool validate(int);
    public:
        int getQuantidade();
        bool setQuantidade(int);
};
