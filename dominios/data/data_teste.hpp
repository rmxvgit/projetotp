#pragma once
#include "data.hpp"

using namespace std;
    /// A classe DataSmokeTest tem o propósito de realizar diversos testes unitários, que checam se o mês ou dia são válidos, tendo em vista anos bissextos e meses com 28, 30 e 31 dias.
class DataSmokeTest{
    private:
        static const string formatoInvalido;
        static const string tamInvalido;
        static const string mesErrado;
        static const string mes_excede_max_30_dias;
        static const string mes_excede_max_31_dias;
        static const string mes_excede_max_28_dias;
        static const string mes_excede_max_29_dias;
        static const string mesValido;

        void setUp();
        void testFev1();
        void testFev2();
        void testMesTrinta();
        void testMesTrintaUm();
        void testmesInvalido();
        void testDataInvalidaTam();
        void testDataInvalidaForm();
        void testmesValido();

        Data data;
        bool state;

    public:
        /// Esse método executa uma série de outros métodos privados de teste, a fim de executá-los 
        static bool run();


};
