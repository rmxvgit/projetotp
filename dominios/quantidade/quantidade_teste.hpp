#ifndef QUANTIDADE_TESTE_HPP_INCLUDED
#define QUANTIDADE_TESTE_HPP_INCLUDED

#include "quantidade.hpp"

class QuantidadeTeste {
private:
    const int QUANTIDADE_VALIDA = 1000;
    const int QUANTIDADE_INVALIDA_NEGATIVA = -1;
    const int QUANTIDADE_INVALIDA_ZERO = 0;
    const int QUANTIDADE_INVALIDA_ACIMA_LIMITE = 1000001;
    
    Quantidade *quantidade;
    bool todosTestesPassaram;
    
    void setUp();
    void tearDown();
    
    void testarCenarioSucesso();
    void testarCenarioFalha();
    
public:
    bool run();
};

#endif // QUANTIDADE_TESTE_HPP_INCLUDED
