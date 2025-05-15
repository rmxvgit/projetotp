
//Work in progress
#include "data_teste.hpp"
#include <iostream>
#include <stdexcept>

const string DataSmokeTest::formatoInvalido = "12/04/21rs";
const string DataSmokeTest::tamInvalido = "1200920054";
const string DataSmokeTest::mesErrado = "20255612";
const string DataSmokeTest::mes_excede_max_31_dias = "20231232";
const string DataSmokeTest::mes_excede_max_30_dias = "20210631";
const string DataSmokeTest::mes_excede_max_29_dias = "20240230";
const string DataSmokeTest::mes_excede_max_28_dias = "19000229";

void DataSmokeTest::setUp(){
    this->state = true;
}

//destrutor?

void DataSmokeTest::testFev1(){
    try{
        this->data.Set(mes_excede_max_28_dias);
    } catch (invalid_argument err){
        return;
    }
    cout << "dia errado: esse mes so possui 28 dias." << endl;
    this->state = false;

}

void DataSmokeTest::testFev2(){
    try{
        this->data.Set(mes_excede_max_29_dias);
    } catch (invalid_argument err){
        return;
    }
    cout << "dia errado: esse mes so possui 29 dias." << endl;
    this->state = false;

}

void DataSmokeTest::testMesTrinta(){
    try{
        this->data.Set(mes_excede_max_30_dias);
    } catch (invalid_argument err){
        return;
    }
    cout << "dia errado: esse mes so possui 30 dias." << endl;
    this->state = false;

}

void DataSmokeTest::testMesTrintaUm(){
    try{
        this->data.Set(mes_excede_max_31_dias);
    } catch (invalid_argument err){
        return;
    }
    cout << "dia errado: esse mes so possui 31 dias." << endl;
    this->state = false;

}

void DataSmokeTest::testmesInvalido(){
    try{
        this->data.Set(mesErrado);
    } catch (invalid_argument err){
        return;
    }
    cout << "o mes e invalido" << endl;
    this->state = false;

}

void DataSmokeTest::testDataInvalidaTam(){
    try{
        this->data.Set(tamInvalido);
    } catch (invalid_argument err){
        return;
    }
    cout << "tamanho invalido" << endl;
    this->state = false;

}

void DataSmokeTest::testDataInvalidaForm(){
    try{
        this->data.Set(formatoInvalido);
    } catch (invalid_argument err){
        return;
    }
    cout << "formato invalido, use apenas caracteres numericos" << endl;
    this->state = false;

}

bool DataSmokeTest::run(){
    DataSmokeTest testing = DataSmokeTest();
    testing.setUp();
    testing.testDataInvalidaForm();
    testing.testDataInvalidaTam();
    testing.testmesInvalido();
    testing.testMesTrintaUm();
    testing.testMesTrinta();
    testing.testFev1();
    testing.testFev2();
    return testing.state;
    


}