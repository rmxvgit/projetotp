#include "name.hpp"
#include <stdexcept>

/*Verifica se o nome digitado pelo usuario segue as normas estabelecidas */
bool Name::validator(const string &userName){

    if(userName.length() > MAXIMUM_LENGTH){
        throw invalid_argument("O nome do usuário não pode conter mais de 20 caracteres.");
    };

    if(!amountOfWhitespace(userName)){
        throw invalid_argument("O nome do usuário não pode ter seguência de espaços em branco.");
    };

    if(!defaultOfTheCharecter(userName)) {
        throw invalid_argument("Não pode haver caracteres especiais no nome do usuário.");
    }

    return true;
}

bool Name::defaultOfTheCharecter(const string &userName) {
    for (const char &ch : userName) {
        if (!(ch == ' ' || (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
            return false;
        }
    }
    return true;
}

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

void Name::Set(const string &userName){
    validator(userName) ;
    this->name = userName;
}

Name::Name() {
    this->name = "";
}

Name::Name(const string& userName) {
    validator(userName);
    this->name = userName;
}
