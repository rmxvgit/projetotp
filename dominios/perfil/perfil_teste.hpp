#ifndef PERFIL_TESTE_HPP_INCLUDED
#define PERFIL_TESTE_HPP_INCLUDED

#include "perfil.hpp"

class PerfilTeste {
private:
    Perfil *perfil;
    bool todosTestesPassaram;
    
    void setUp();
    void tearDown();
    
    void testarCenarioSucesso();
    void testarCenarioFalha();
    
public:
    bool run();
};

#endif // PERFIL_TESTE_HPP_INCLUDED
