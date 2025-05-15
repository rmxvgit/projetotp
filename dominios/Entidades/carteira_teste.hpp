#ifndef CARTEIRA_TESTE_HPP_INCLUDED
#define CARTEIRA_TESTE_HPP_INCLUDED

#include "carteira.hpp"
#include "../codigo/codigo.hpp"
#include "../name/name.hpp"
#include "../perfil/perfil.hpp"

class CarteiraTeste {
private:
    Carteira *carteira;
    bool todosTestesPassaram;
    
    void setUp();
    void tearDown();
    
    void testarCenarioSucesso();
    void testarCenarioFalha();
    
public:
    bool run();
};

#endif // CARTEIRA_TESTE_HPP_INCLUDED
