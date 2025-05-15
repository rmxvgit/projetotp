#include <stdexcept>
#include <iostream>
#include "name_test.hpp"

void NameSmokeTest :: setUp(){
    nameInstance = new Name();
    testStatus = true;
};

void NameSmokeTest :: tearDown(){
    delete nameInstance;
};

void NameSmokeTest :: testValidName(){
    try {
        nameInstance->Set(validName);
        if(nameInstance->Get() != validName) {
            testStatus = false;
            cout << "testValidName failed: name invalid in domain name was accepted."<<  endl; 
        };
    }
    catch(invalid_argument &exp){
        testStatus = false;
         cout << "testValidName failed: "<< exp.what() <<  endl; 
    }
};


void NameSmokeTest :: testInvalidLength(){
    try{
        nameInstance->Set(invalidLengthName);
        testStatus = false; 
        cout << "testInvalidLength failed: Invalid length in domain name was accepted." << endl;
    }
    catch(invalid_argument &exp){
        if(nameInstance->Get() == invalidLengthName) {
            testStatus = false;
            cout << "testInvalidLength: Exception thrown, but invalid name was still set: " << exp.what() << endl;
        };
    }
     
};

void NameSmokeTest :: testInvalidCharacter(){
    try{
        nameInstance->Set(invalidCharacterName);
        testStatus = false;
        cout << "testInvalidCharacter failed: Invalid character in domain name was accepted." << endl;
    }
    catch(invalid_argument &exp){
        if(nameInstance->Get() == invalidCharacterName) {
            testStatus = false;
             cout << "testInvalidCharacter failed: Exception thrown, but invalid name was still set. Error: " << exp.what() << endl;
        };
    }
};

void NameSmokeTest :: testInvalidSpacing(){
    try{
        nameInstance->Set(invalidSpacingName);
        testStatus = false;
        cout << "testInvalidSpacing failed: Invalid spacing in domain name was accepted." << endl;
    }
    catch(invalid_argument &exp){
        if(nameInstance->Get() == invalidSpacingName) {
            testStatus = false;
            cout << "ttestInvalidSpacing failed: Exception thrown, but invalid name was still set. Error: " << exp.what() << endl;
        }
    }
};

bool NameSmokeTest :: run(){
    setUp();
    testValidName();
    testInvalidLength();
    testInvalidCharacter();
    testInvalidSpacing();
    tearDown();

    return testStatus;
};


