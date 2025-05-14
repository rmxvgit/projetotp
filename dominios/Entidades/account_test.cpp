#include "account_test.hpp"

void AccountSmokeTest :: setUp(){
    accountInstance = new Account();
    testState = true;
};

void AccountSmokeTest:: tearDown(){
    delete accountInstance;
};

void AccountSmokeTest :: testScenario(){

    Name name;
    Cpf cpf;
    Password password;

    name.Set(nameValid);
    cpf.Set(cpfValid);
    password.Set(pwdValid);

    accountInstance->setCpf(cpf);
    accountInstance->setName(name);
    accountInstance->setPassword(password);

    if(accountInstance->getCpf().Get() != cpfValid){
        testState = false;
        cout << "Test Account cpf failure" <<endl;
    }

    if(accountInstance->getName().Get() != nameValid){
        testState = false;
        cout << "Test Account name failure" <<endl;
    }

    if(accountInstance->getPassword().Get() != pwdValid){
        testState = false;
        cout << "Test Account password failure" <<endl;
    }
}

bool AccountSmokeTest :: run(){
    setUp();
    testScenario();
    tearDown();

    return testState;
};


    