#pragma once

class Quantidade{
    private:
        int quantidade;
        bool validate(int);
    public:
        int getQuantidade();
        bool setQuantidade(int);
};
