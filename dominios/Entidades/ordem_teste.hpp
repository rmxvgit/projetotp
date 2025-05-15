#ifndef ORDEM_TESTE_HPP_INCLUDED
#define ORDEM_TESTE_HPP_INCLUDED

#include "ordem.hpp"
#include "../codigo/codigo.hpp"
#include "../data/data.hpp"
#include "../quantidade/quantidade.hpp"
#include "../negociarCode/negociarCode.hpp"
#include "../dinheiro/dinheiro.hpp"

class OrdemTeste {
private:
    Ordem *ordem;
    bool todosTestesPassaram;
    
    void setUp();
    void tearDown();
    
    void testarCenarioSucesso();
    void testarCenarioFalha();
    
public:
    bool run();
};

#endif // ORDEM_TESTE_HPP_INCLUDED
