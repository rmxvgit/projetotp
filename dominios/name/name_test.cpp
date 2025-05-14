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
        if(nome->Get() != nomeComComprimentoValido) {
            estado = falha;
        };
    }
    catch(invalid_argument &excecao){
        estado = falha;
    }
    
};

void testeDeFumacaNome :: testarNomeComCaracteresValidos(){
    try {
        nome->Set(nomeComCaracteresValidos);
        if(nome->Get() != nomeComCaracteresValidos) {
            estado = falha;
        };
    }
    catch(invalid_argument &excecao){
        estado = falha;
    }
    
};

void testeDeFumacaNome :: testarNomeComEspacamentoValido(){
    try {
        nome->Set(nomeComEspacamentoValido);
        if(nome->Get() != nomeComEspacamentoValido) {
            estado = falha;
        };
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
        if(nome->Get() == nomeComCaracteresInvalidos) {
            estado = falha;
        };
    }
};

void testeDeFumacaNome :: testarNomeComComprimentoInvalido(){
    try{
        nome->Set(nomeComComprimentoInvalido);
        estado = falha;
    }
    catch(invalid_argument &excecao){
        if(nome->Get() == nomeComComprimentoInvalido) {
            estado = falha;
        };
    }
};

void testeDeFumacaNome :: testarNomeComEspacamentoInvalido(){
    try{
        nome->Set(nomeComEspacamentoInvalido);
        estado = falha;
    }
    catch(invalid_argument &excecao){
        if(nome->Get() == nomeComEspacamentoInvalido) {
            estado = falha;
        };
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


