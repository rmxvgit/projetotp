#pragma once
#include <string>

using namespace std;

class Codigo {
    private:
        static const int LIMITE = 9;
        string valor;
        void validar(const string&);
    public:
        void Set(const string&);
        string Get();
};

inline string Codigo::Get(){
    return this->valor;
}
