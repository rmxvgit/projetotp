#ifndef DINHEIRO_TESTE_HPP_INCLUDED
#define DINHEIRO_TESTE_HPP_INCLUDED

#include "dinheiro.hpp"

class DinheiroTeste {
private:
    const float VALOR_VALIDO = 1000.50;
    const float VALOR_INVALIDO_NEGATIVO = -1.0;
    const float VALOR_INVALIDO_ACIMA_LIMITE = 1000001.00;
    const float VALOR_INVALIDO_ZERO = 0.0;
    
    Dinheiro *dinheiro;
    bool todosTestesPassaram;
    
    void setUp();
    void tearDown();
    
    void testarCenarioSucesso();
    void testarCenarioFalha();
    
public:
    bool run();
};

#endif // DINHEIRO_TESTE_HPP_INCLUDED
