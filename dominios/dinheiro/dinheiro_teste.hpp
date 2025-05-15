#pragma once
#include "dinheiro.hpp"


class DinheiroSmokeTest{

    private:
        const static float invalidDinheiro;
        const static float invalidDinheiro1;

        void setUp();

        void test1();
        void test2();

        Dinheiro dinheiro;
        bool state;

    public:
        static bool run();

};
