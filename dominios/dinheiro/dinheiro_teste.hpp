#pragma once
#include "dinheiro.hpp"

/// A classe tem o propósito de realizar diversos testes unitários, checando se o dinheiro está dentro da faixa esperada (0.01 e 1000000.00)
class DinheiroSmokeTest{

    private:
        const static float invalidDinheiro;
        const static float invalidDinheiro1;
        const static float validDinheiro;

        void setUp();

        void test0();
        void test1();
        void test2();

        Dinheiro dinheiro;
        bool state;

    public:
        ///Aqui diversas métodos de teste privados são executados.
        static bool run();

};
