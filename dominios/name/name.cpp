#include "name.hpp"
#include <stdexcept>

/*Verifies if the name entered by the user follows the established rules */
bool Name::validator(const string &userName){

    if(userName.length() > MAXIMUM_LENGTH){
        throw invalid_argument("The user's name cannot contain more than 20 characters.");
    };

    if(!hasConsecutiveSpaces(userName)){
        throw invalid_argument("The user's name cannot have consecutive spaces.");
    };

    if(!hasInvalidCharacters(userName)) {
        throw invalid_argument("The user's name cannot contain special characters.");
    }

    return true;
}

bool Name::hasInvalidCharacters(const string &userName) {
    for (const char &ch : userName) {
        if (!(ch == ' ' || (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
            return false;
        }
    }
    return true;
}

bool Name :: hasConsecutiveSpaces(const string &userName){

        for(int i = 0 ; i < userName.length() - 1 ; i ++){
            
            if((userName[i] == ' ') && (userName[i + 1] == ' ') ){
                return false;
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
