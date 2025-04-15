#include "name.hpp"

Name::Name() {
    this->name = "";
}

Name::Name(const string& userName) {
    if(!validator(userName)) {/* error */};

    this->name = userName;
}

/*Metodo responsável por analisar se o nome digitado pelo usuário segue os padrões estabelecidos */
bool Name::validator(const string &userName){

    if(userName.length() > MAXIMUM_LENGTH) return false;//Verificando se tamanho do vetor não passa de 20 caracteres

    if(!amountOfWhitespace(userName)) return false; //Verificando se os caracteres contidos no vetor são permitidos pela definição

    if(!defaultOfTheCharecter(userName)) return false;// Verificando se há uma segência de espaços em branco

    return true;
}

bool Name :: defaultOfTheCharecter( const string &userName){

    for(const char& ch: userName){

        int convertingStringToCharacter = int(ch);

        if((convertingStringToCharacter < 32) ||
        ((convertingStringToCharacter >= 33) && (convertingStringToCharacter <= 47)) ||
        ((convertingStringToCharacter >= 91) && (convertingStringToCharacter <= 96)) ||
        ((convertingStringToCharacter >= 123) && (convertingStringToCharacter <= 127))) return false;
    }
    return true;
};

bool Name :: amountOfWhitespace(const string &userName){

    int sequenceOfWhitespace = 0;
    for(const char& ch: userName){

        int convertingStringToCharacter = int(ch);

        if(convertingStringToCharacter == 32){
            sequenceOfWhitespace ++;
            if(sequenceOfWhitespace == 2) return false;
        }else {
            sequenceOfWhitespace = 0 ;
        }

    }
    return true;
}

bool Name::Set(const string &userName){
    if(!validator(userName)) return false;

    this->name = userName;
    return true;
}
