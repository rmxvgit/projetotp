#include <iostream>
#include "name.hpp"

using namespace std;
class testeDeFumacaNome {
    private:
       const string nomeComComprimentoValido = "Eren Jaeger";
       const string nomeComComprimentoInvalido = "Roronoa Zoro no Ichibansenpai";
       const string nomeComCaracteresValidos = "99 Edward Elric";
       const string nomeComCaracteresInvalidos = "Ichig@ Kurosak!";
       const string nomeComEspacamentoValido = "S a t o r u G o j o";
       const string nomeComEspacamentoInvalido = "Tanjiro  Kamado";

        Name *nome;
        int estado;

        void configurarNome();
        void deletarNome();
        
        void testarNomeComComprimentoValido();
        void testarNomeComComprimentoInvalido();
        void testarNomeComCaracteresValidos();
        void testarNomeComCaracteresInvalidos();
        void testarNomeComEspacamentoValido();
        void testarNomeComEspacamentoInvalido();

    
    public:
        const static int sucesso = 0;
        const static int falha = -1;

        int run();
};
