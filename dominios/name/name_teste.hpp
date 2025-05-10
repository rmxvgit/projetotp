#include <iostream>
#include "name.hpp"

using namespace std;
class testeDeFumacaNome {
    private:
        string nomeComComprimentoValido = "Eren Jaeger";
        string nomeComcomprimentoInvalido = "Roronoa Zoro no Ichibansenpai";
        string nomeComCaracteresValidos = "99 Edward Elric";
        string nomeComCaracteresInvalidos = "Ichig@ Kurosak!";
        string nomeComEspacamentoValido = "S a t o r u G o j o";
        string nomeComEspacamentoInvalido = "Tanjiro  Kamado";
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
        int sucesso = 1;
        int falha = 0;

        int run();
};
