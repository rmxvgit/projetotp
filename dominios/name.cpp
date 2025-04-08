#include "name.hpp"

/*Metodo responsavel por verificar se o vetor token segue os padrões estabelecidos */
bool Name::validator_01 (const string &token){

    /*Verificando o tamanho do vetor não passar de 20 caracteres*/
    int size = token.length();
    if(size > LIMITE) return false;
    
    /*Verificando se os caracteres contidos no vetor são permitidos pela definição*/
    for(const char& ch: token){

        int QuantidadeDeEspacoEmBranco = 0;
        if(33 >= ch <= 47 ||  91  >= ch <= 96 || 123 >= ch <= 127 ) return false;

        if(ch == 32){

            QuantidadeDeEspacoEmBranco += 1 ;

        }else{
            QuantidadeDeEspacoEmBranco = 0;
        }
        
        if(QuantidadeDeEspacoEmBranco = 2) return false;

    }
    return true;
}

bool Name::setValue(const string &token){
    if(!validator_01(token)) return false;

    this->token = token;
    return true;

}

