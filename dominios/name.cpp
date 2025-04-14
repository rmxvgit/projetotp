#include "name.hpp"

/*Metodo responsavel por verificar se o vetor token segue os padrões estabelecidos */
bool Name::validator_01 (const string &token){

    /*Verificando o tamanho do vetor não passar de 20 caracteres*/
    int size = token.length();
    if(size > LIMITE) return false;
    
    /*Verificando se os caracteres contidos no vetor são permitidos pela definição*/
    int QuantidadeDeEspacoEmBranco = 0;
    for(const char& ch: token){

        
        int convertendoDeStringParaInteiro = int(ch);
        if((convertendoDeStringParaInteiro < 32) ||
        ((convertendoDeStringParaInteiro >= 33) && (convertendoDeStringParaInteiro <= 47)) ||  
        ((convertendoDeStringParaInteiro >= 91) && (convertendoDeStringParaInteiro <= 96)) || 
        ((convertendoDeStringParaInteiro >= 123) && (convertendoDeStringParaInteiro <= 127))) return false;

        if(convertendoDeStringParaInteiro == 32){

            QuantidadeDeEspacoEmBranco += 1 ;
            if(QuantidadeDeEspacoEmBranco == 2) return false;

        }else{
            QuantidadeDeEspacoEmBranco = 0;
        }

    }
    return true;
}

bool Name::setValue(const string &token){
    if(!validator_01(token)) return false;

    this->token = token;
    return true;

}

