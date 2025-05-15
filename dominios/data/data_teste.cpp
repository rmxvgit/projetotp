#include "data_teste.hpp"
#include <iostream>
#include <stdexcept>

const string DataSmokeTest::valid_date = "20120607";
const string DataSmokeTest::invalid_date = "07062012";

bool DataSmokeTest::Run() {
    DataSmokeTest testing;
    testing.setup();
    testing.test1();
    testing.test2();
    testing.erase();
    return testing.state;
}

void DataSmokeTest::setup() {} // sim, como eu não usei ponteiro eu não preciso alocar memória.

void DataSmokeTest::erase(){} // como eu não aloquei memória, eu não preciso desalocar memória.

void DataSmokeTest::test1(){
    try {
        this->date.Set(valid_date);
    } catch (invalid_argument a) {
        cout << "Error in the first date test" << endl;
        this->state = false;
        return;
    }
}

void DataSmokeTest::test2(){
    try {
        this->date.Set(invalid_date);
    } catch (invalid_argument a) {
        return;
    }
    cout << "Error in the second date test" << endl;
    this->state = false;
    return;
}
