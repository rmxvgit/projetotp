#include <string>
#include "data.hpp"

///A clazsse DataSmokeTest tem o propósito de realizar diversos testes unitários, que checam se o mês ou dia são válidos, tendo em vista anos bissextos e meses com 28, 30 e 31 dias.

class DataSmokeTest {
    private:

        std::string formatoInvalido = "12/04/21rs";
        std::string tamInvalido = "1200920054";
        std::string mesErrado = "20255612";
        std::string mes_excede_max_31_dias = "20231232";
        std::string mes_excede_max_30_dias = "20210631";
        std::string mes_excede_max_29_dias = "20240230";
        std::string mes_excede_max_28_dias = "19000229";
        std::string mesValido = "20021224";

        void testFev1();
        void testFev2();
        void testMesTrinta();
        void testMesTrintaUm();
        void testmesInvalido();
        void testDataInvalidaTam();
        void testDataInvalidaForm();
        void setUp();
        void testeMesValido();

        Data data;
        bool state;

    public:
        /// Esse método executa uma série de outros métodos privados de teste, a fim de executá-los
        static bool run();
};
