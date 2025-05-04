#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

class Dinheiro{
private:
    float dinheiro;
    bool valido;
    void validarDinheiro(float);
public:
    float Get();
    void Set(float);


};

#endif // DINHEIRO_HPP_INCLUDED
