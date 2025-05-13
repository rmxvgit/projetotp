#include "cpf_teste.hpp"
#include <iostream>
#include <stdexcept>

const string CpfSmokeTest::cpf_with_lenght_exeeded = "000.000.000.000";
const string CpfSmokeTest::cpf_with_no_delimiters = "00000000000";
const string CpfSmokeTest::cpf_with_too_many_numbers = "000000000000";
const string CpfSmokeTest::cpf_with_too_few_numbers = "11";
const string CpfSmokeTest::cpf_with_letters = "batata000.000.000-00";
const string CpfSmokeTest::empty_cpf = "";

void CpfSmokeTest::setup(){
    this->state = true;
}

void CpfSmokeTest::test1() {
    try {
        this->cpf.Set(cpf_with_lenght_exeeded);
    } catch (invalid_argument err) {
        if (this->cpf.Get() == "000.000.000.000") {
            cout << "erro no teste 1 do cpf" << endl;
            this->state = false;
        }
        return;
    }
    cout << "erro no teste 1 do cpf" << endl;
    this->state = false;
};

void CpfSmokeTest::test2() {
    this->cpf.Set(cpf_with_no_delimiters);

    if (this->cpf.Get() == "000.000.000-00"){
        return;
    }
    cout << "erro no teste 2 do cpf" << endl;
    this->state = false;
}


void CpfSmokeTest::test3() {
    try {
        this->cpf.Set(cpf_with_too_many_numbers);
    } catch (invalid_argument err) {
        return;
    }
    cout << "erro no teste 3 do cpf" << endl;
    this->state = false;
}

void CpfSmokeTest::test4() {
    this->cpf.Set(cpf_with_too_few_numbers);
    if (this->cpf.Get() == "000.000.000-11"){

        return;
    }
    cout << this->cpf.Get() << endl;
    cout << "erro no teste 4 do cpf" << endl;
    this->state = false;
}


void CpfSmokeTest::test5() {
    this->cpf.Set(cpf_with_letters);

    if (this->cpf.Get() == "000.000.000-00"){
        return;
    }
    cout << "erro no teste 5 do cpf" << endl;
    this->state = false;
}

void CpfSmokeTest::test6() {
    this->cpf.Set(empty_cpf);

    if (this->cpf.Get() == "000.000.000-00"){
        return;
    }
    cout << "erro no teste 6 do cpf" << endl;
    this->state = false;
}

bool CpfSmokeTest::Run() {
    CpfSmokeTest testing = CpfSmokeTest();
    testing.setup();
    testing.test1();
    testing.test2();
    testing.test3();
    testing.test4();
    testing.test5();
    testing.test6();
    return testing.state;
}
