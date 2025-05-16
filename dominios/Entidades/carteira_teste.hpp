#ifndef CARTEIRA_TESTE_HPP_INCLUDED
#define CARTEIRA_TESTE_HPP_INCLUDED

#include "carteira.hpp"
#include "../codigo/codigo.hpp"
#include "../name/name.hpp"
#include "../perfil/perfil.hpp"
/// Esta classe vai testar se todos os dados foram colocados de forma correta.
class CarteiraTeste {
private:
    Carteira *carteira;
    bool todosTestesPassaram;
    
    void setUp();
    void tearDown();
    
    void testarCenarioSucesso();
    void testarCenarioFalha();
    
public:

/// O método Run() executa testes automatizados para verificar se a validação da entidade carteira funciona corretamente.
    bool run();
};

#endif // CARTEIRA_TESTE_HPP_INCLUDED
