#include <iostream>
#include "name.hpp"

class testeDeFumacaNome {
    private:
        string nomeComComprimentoValido = "Eren Jaeger";
        string nomeComcomprimentoInvalido = "Roronoa Zoro no Ichibansenpai";
        string nomeComCaracteresValidos = "99 Edward Elric";
        string nomeComCaracteresInvalidos = "Ichig@ Kurosak!";
        string nomeComEspacoEmBrancoValido = "S a t o r u G o j o";
        string nomeComEspacoEmBrancoInvalido = "Tanjiro  Kamado";
        Name *nome;
        int estado;
        void configurarNome();
        void deletarNome();
        void testarCenarioValido();
        void testarCenarioInvalido();
    
    public:
        int sucesso = 1;
        int falha = 0;

        void run();
};
