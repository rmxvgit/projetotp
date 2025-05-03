#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

class Dinheiro{
private:
    float dinheiro;
    bool valido;
    void validarDinheiro(float);
public:
    float getDinheiro();
    void setDinheiro(float);
    

};

#endif // DINHEIRO_HPP_INCLUDED
