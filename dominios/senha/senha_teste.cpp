#include "senha_teste.hpp"
#include <stdexcept>

using namespace std;

void passwordSmokeTest::setUpPassword(){
    password = new Senha();
    state = sucess;
};

void passwordSmokeTest::tearDowntPassword(){
    delete password;
};

void passwordSmokeTest::testPasswordValid()
{
    try{
        password->Set(passwordValid);
        if(password->Get() != passwordValid){
            state = false;
        } 
    }
    catch(invalid_argument &exception){
        state = false;
    }
    

};

void passwordSmokeTest::testPasswordWithInvalidLength(){
    try{
        password->Set(passwordWithInvalidLength);
        state = false;
        
    }
    catch(invalid_argument &exception){
        if (password->Get() == passwordWithInvalidLength){
            state = false;
        }
    }
    
};

void passwordSmokeTest::testPasswordWithInvalidCharacters(){
    try{
        password->Set(passwordWithInvalidCharacters);
        state = false;
        
    }
    catch(invalid_argument &exception){
        if (password->Get() == passwordWithInvalidCharacters){
            state = false;
        }
    }
};

void passwordSmokeTest::testPasswordWithDuplicateCharacters(){
    try{
        password->Set(passwordWithDuplicateCharacters);
        state = false;
        
    }
    catch(invalid_argument &exception){
        if (password->Get() == passwordWithDuplicateCharacters){
            state = false;
        }
    }
};

void passwordSmokeTest::testPasswordWithoutNumbers(){
    try{
        password->Set(passwordWithoutNumbers);
        state = false;
        
    }
    catch(invalid_argument &exception){
        if (password->Get() == passwordWithoutNumbers){
            state = false;
        }
    }
};

void passwordSmokeTest::testPasswordWithoutUppercase(){
    try{
        password->Set(passwordWithoutUppercase);
        state = false;
        
    }
    catch(invalid_argument &exception){
        if (password->Get() == passwordWithoutUppercase){
            state = false;
        }
    }
};

void passwordSmokeTest::testPasswordWithoutLowercase(){
    try{
        password->Set(passwordWithoutLowercase);
        state = false;
        
    }
    catch(invalid_argument &exception){
        if (password->Get() == passwordWithoutLowercase){
            state = false;
        }
    }
};

void passwordSmokeTest::testPasswordWithoutSpecialCharacter(){
    try{
        password->Set(passwordWithoutSpecialCharacter);
        state = false;
        
    }
    catch(invalid_argument &exception){
        if (password->Get() == passwordWithoutSpecialCharacter){
            state = false;
        }
    }
};

int passwordSmokeTest::run(){

    setUpPassword();

    testPasswordValid();
    testPasswordWithInvalidLength();
    testPasswordWithInvalidCharacters();
    testPasswordWithDuplicateCharacters();
    testPasswordWithoutNumbers();
    testPasswordWithoutUppercase();
    testPasswordWithoutLowercase();
    testPasswordWithoutSpecialCharacter();

    tearDowntPassword();

    return state;

}