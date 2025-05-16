#pragma once
#include "data.hpp"

using namespace std;

class DataSmokeTest{
    private:
        static const string formatoInvalido;
        static const string tamInvalido;
        static const string mesErrado;
        static const string mes_excede_max_30_dias;
        static const string mes_excede_max_31_dias;
        static const string mes_excede_max_28_dias;
        static const string mes_excede_max_29_dias;

        void setUp();

        void testFev1();
        void testFev2();
        void testMesTrinta();
        void testMesTrintaUm();
        void testmesInvalido();
        void testDataInvalidaTam();
        void testDataInvalidaForm();

        Data data;
        bool state;

    public:
        static bool run();


};
