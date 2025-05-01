#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED
#include <stdexcept>
using namespace std;

class Dinheiro{
private:
    float dinheiro;
    bool valido;
public:
    float getDinheiro();
    void setDinheiro(float);
    void validarDinheiro(float);

};

#endif // DINHEIRO_HPP_INCLUDED
