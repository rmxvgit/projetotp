#pragma once
#include <iostream>
#include "dinheiro.hpp"

using namespace std;

class DinheiroSmokeTest{

    private:
        const static float invalidDinheiro;
        const static float invalidDinheiro1;

        void setUp();
        void erase();

        void test1();
        void test2();

        Dinheiro dinheiro;
        bool state;
        
    public:
        static bool run();

};