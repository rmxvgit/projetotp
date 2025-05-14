#include "password_test.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

void PasswordSmokeTest::setUp(){
    pwd = new Password();
    testState= true;
};

void PasswordSmokeTest::tearDown(){
    delete pwd;
};

void PasswordSmokeTest::testValidPwd()
{
    try{
        pwd->Set(validPwd);
        if(pwd->Get() != validPwd){
            testState= false;
            cout << "testValidPwd failed: password invalid in domain Password was accepted."<<  endl; 
        } 
    }
    catch(invalid_argument &exp){
        testState= false;
        cout << "testValidPwd failed: "<< exp.what() <<  endl; 

    }
    

};

void PasswordSmokeTest::testLengthInvalidPwd(){
    try{
        pwd->Set(invalidLengthPwd);
        testState= false;
        cout << "testInvalidLengthPwd failed" << endl;
        
    }
    catch(invalid_argument &exp){
        if (pwd->Get() == invalidLengthPwd){
            testState= false;
            cout << "testInvalidLengthPwd: Exception thrown, but invalid password was still set: " << exp.what() << endl;
        }
    }
    
};

void PasswordSmokeTest::testInvalidCharPwd(){
    try{
        pwd->Set(invalidCharPwd);
        testState= false;
        cout << "testInvalidCharPwd failed" << endl;
        
    }
    catch(invalid_argument &exp){
        if (pwd->Get() == invalidCharPwd){
            testState= false;
            cout << "testInvalidCharPwd: Exception thrown, but invalid password was still set: " << exp.what() << endl;
        }
    }
};

void PasswordSmokeTest::testDuplicateCharPwd(){
    try{
        pwd->Set(duplicateCharPwd);
        testState= false;
        cout << "testDuplicateCharPwd failed" << endl;
        
    }
    catch(invalid_argument &exp){
        if (pwd->Get() == duplicateCharPwd){
            testState= false;
            cout << "testDuplicateCharPwd: Exception thrown, but invalid password was still set: " << exp.what() << endl;
        }
    }
};

void PasswordSmokeTest::testNoNumberPwd(){
    try{
        pwd->Set(noNumberPwd);
        testState= false;
        cout << "testNoNumberPwd failed" << endl;
        
    }
    catch(invalid_argument &exp){
        if (pwd->Get() == noNumberPwd){
            testState= false;
            cout << "testNoNumberPwd: Exception thrown, but invalid password was still set: " << exp.what() << endl;
        }
    }
};

void PasswordSmokeTest::testNoUpperCasePwd(){
    try{
        pwd->Set(noUpperCasePwd);
        testState= false;
        cout << "testNoUpperCasePwd: failed" << endl;
        
    }
    catch(invalid_argument &exp){
        if (pwd->Get() == noUpperCasePwd){
            testState= false;
            cout << "testNoUpperCasePwd: Exception thrown, but invalid password was still set: " << exp.what() << endl;
        }
    }
};

void PasswordSmokeTest::testNoLowerCasePwd(){
    try{
        pwd->Set(noLowerCasePwd);
        testState= false;
        cout << "testNoLowerCasePwd failed" << endl;
        
    }
    catch(invalid_argument &exp){
        if (pwd->Get() == noLowerCasePwd){
            testState= false;
            cout << "testNoLowerCasePwd: Exception thrown, but invalid password was still set: " << exp.what() << endl;
        }
    }
};

void PasswordSmokeTest::testNoSpecialCharPwd(){
    try{
        pwd->Set(noSpecialCharPwd);
        testState= false;
        cout << "testNoSpecialCharPwd failed" << endl;
        
    }
    catch(invalid_argument &exp){
        if (pwd->Get() == noSpecialCharPwd){
            testState= false;
            cout << "testNoSpecialCharPwd: Exception thrown, but invalid password was still set: " << exp.what() << endl;
        }
    }
};

bool PasswordSmokeTest::run(){

    setUp();

    testValidPwd();
    testLengthInvalidPwd();
    testInvalidCharPwd();
    testDuplicateCharPwd();
    testNoNumberPwd();
    testNoUpperCasePwd();
    testNoLowerCasePwd();
    testNoSpecialCharPwd();

    tearDown();

    return testState;

}