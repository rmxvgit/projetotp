#ifndef NEGOCIARCODE_TESTE_HPP_INCLUDED
#define NEGOCIARCODE_TESTE_HPP_INCLUDED

#include "negociarCode.hpp"

class NegociarCodeTeste {
private:
    const string CODIGO_VALIDO = "ABC123456789";
    const string CODIGO_INVALIDO_TAMANHO = "ABC1234567890";  // 13 caracteres
    const string CODIGO_INVALIDO_CARACTERE = "ABC@123456";   // contém @
    const string CODIGO_VALIDO_NUMEROS = "123456789012";     // só números
    const string CODIGO_VALIDO_LETRAS = "ABCDEFGHIJKL";      // só letras
    
    codigoNegocio *codigo;
    bool todosTestesPassaram;
    
    void setUp();
    void tearDown();
    
    void testarCenarioSucesso();
    void testarCenarioFalha();
    
public:
    bool run();
};

#endif // NEGOCIARCODE_TESTE_HPP_INCLUDED
