#include <stdexcept>
#include "name_teste.hpp"

void testeDeFumacaNome :: configurarNome(){
    nome = new Name();
    estado = sucesso;
}

void testeDeFumacaNome :: deletarNome(){
    delete nome;
}

void testeDeFumacaNome :: testarNomeComComprimentoValido(){
    try {
        nome->Set(nomeComComprimentoValido);
    }
    catch(invalid_argument &excecao){
        estado = falha;
    }
    
};

void testeDeFumacaNome :: testarNomeComCaracteresValidos(){
    try {
        nome->Set(nomeComCaracteresValidos);
    }
    catch(invalid_argument &excecao){
        estado = falha;
    }
    
};

void testeDeFumacaNome :: testarNomeComEspacamentoValido(){
    try {
        nome->Set(nomeComEspacamentoValido);
    }
    catch(invalid_argument &excecao){
        estado = falha;
    }
    
};

void testeDeFumacaNome :: testarNomeComCaracteresInvalidos(){
    try{
        nome->Set(nomeComCaracteresInvalidos);
        estado = falha;
    }
    catch(invalid_argument &excecao){
        return;
    }
};

void testeDeFumacaNome :: testarNomeComComprimentoInvalido(){
    try{
        nome->Set(nomeComcomprimentoInvalido);
        estado = falha;
    }
    catch(invalid_argument &excecao){
        return;
    }
};

void testeDeFumacaNome :: testarNomeComEspacamentoInvalido(){
    try{
        nome->Set(nomeComEspacamentoInvalido);
        estado = falha;
    }
    catch(invalid_argument &excecao){
        return;
    }
};

int testeDeFumacaNome :: run(){
    configurarNome();
    testarNomeComCaracteresValidos();
    testarNomeComCaracteresInvalidos();
    testarNomeComComprimentoValido();
    testarNomeComComprimentoInvalido();
    testarNomeComEspacamentoValido();
    testarNomeComEspacamentoInvalido();
    deletarNome();

    return estado;
};


