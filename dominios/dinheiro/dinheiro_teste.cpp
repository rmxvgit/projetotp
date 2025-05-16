#include "dinheiro_teste.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

const float DinheiroSmokeTest::invalidDinheiro = 0.0001;
const float DinheiroSmokeTest::invalidDinheiro1 = 10000000000000.56;
const float DinheiroSmokeTest::validDinheiro = 1.00;

void DinheiroSmokeTest::setUp(){
    this->state = true;
}

void DinheiroSmokeTest::test0(){
    try{
        this->dinheiro.Set(validDinheiro);
    } catch (invalid_argument err){
        return;  
        this->state = false;
        cout << "dinheiro invalido" << endl;
    }
}

void DinheiroSmokeTest::test1(){
    try{
        this->dinheiro.Set(invalidDinheiro);
    }catch (invalid_argument err){
        cout << "quantidade de dinheiro invalida, minimo de 0.01" << endl;
        this->state = false;
    }

}

void DinheiroSmokeTest::test2(){
    try{
        this->dinheiro.Set(invalidDinheiro1);
    }catch (invalid_argument err){
        cout << "quantidade de dinheiro invalida, maximo de 1000000.00" << endl;
    }
}


bool DinheiroSmokeTest::run(){
    DinheiroSmokeTest testing = DinheiroSmokeTest();
    testing.setUp();
    testing.test0();
    testing.test1();
    testing.test2();
    return testing.state;
}
