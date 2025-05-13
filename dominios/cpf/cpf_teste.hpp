#pragma once
#include "string"
#include "cpf.hpp"

using  namespace std ;

class CpfSmokeTest {
    private:
        static const string cpf_with_lenght_exeeded;
        static const string cpf_with_no_delimiters;
        static const string cpf_with_too_many_numbers;
        static const string cpf_with_too_few_numbers;
        static const string cpf_with_letters;
        static const string empty_cpf;

        void setup();
        void erase();
        void test1();
        void test2();
        void test3();
        void test4();
        void test5();
        void test6();

        Cpf cpf;
        bool state;

    public:
        static bool Run();
};
