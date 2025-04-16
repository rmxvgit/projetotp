#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

using namespace std;

class Dinheiro{
private:
    float dinheiro;
    bool valido;
public:
    float getDinheiro();
    bool setDinheiro(float);
    bool validarDinheiro(float);

};

#endif // DINHEIRO_HPP_INCLUDED
