#include <stdexcept>
#include <iostream>
#include "codigo_teste.hpp"

void CodigoSmokeTest :: setUp(){
    codeInstacance = new Codigo();
    testStatus = true;
};

void CodigoSmokeTest :: tearDown(){
    delete codeInstacance;
};

void CodigoSmokeTest :: testValidCode(){
    try {
        codeInstacance->Set(validCode);
        if(codeInstacance->Get() != validCode) {
            testStatus = false;
            cout << "testValidCode failed: invalid code in domain name was accepted."<<  endl; 
        };
    }
    catch(invalid_argument &exp){
        testStatus = false;
         cout << "testValidCode failed: "<< exp.what() <<  endl; 
    }
};


void CodigoSmokeTest :: testInvalidLengthCodeMax(){
    try{
        codeInstacance->Set(invalidLengthCodeMax);
        testStatus = false; 
        cout << "testInvalidLengthCodeMax failed: Invalid length in domain code was accepted." << endl;
    }
    catch(invalid_argument &exp){
        if(codeInstacance->Get() == invalidLengthCodeMax) {
            testStatus = false;
            cout << "testInvalidLengthCodeMax: Exception thrown, but invalid code was still set: " << exp.what() << endl;
        };
    }
     
};

void CodigoSmokeTest :: testInvalidLengthCodeMin(){
    try{
        codeInstacance->Set(invalidLengthCodeMin);
        testStatus = false;
        cout << "testInvalidLengthCodeMin failed: Invalid code in domain name was accepted." << endl;
    }
    catch(invalid_argument &exp){
        if(codeInstacance->Get() == invalidLengthCodeMin) {
            testStatus = false;
             cout << "testInvalidLengthCodeMin failed: Exception thrown, but invalid code was still set. Error: " << exp.what() << endl;
        };
    }
};

void CodigoSmokeTest :: testInvalidCharacter(){
    try{
        codeInstacance->Set(invalidCharacter);
        testStatus = false;
        cout << "testInvalidCharacter failed: Invalid code in domain name was accepted." << endl;
    }
    catch(invalid_argument &exp){
        if(codeInstacance->Get() == invalidCharacter) {
            testStatus = false;
             cout << "testInvalidCharacter failed: Exception thrown, but invalid code was still set. Error: " << exp.what() << endl;
        };
    }
};

bool CodigoSmokeTest :: run(){
    setUp();
    testValidCode();
    testInvalidLengthCodeMax();
    testInvalidLengthCodeMin();
    testInvalidCharacter();
    tearDown();

    return testStatus;
};


