#include "account.hpp"
#include "../name/name.hpp"
#include "../password/password.hpp"
#include <iostream>

using namespace std;

    /**
     * @brief verifica a estabilidade e funcionalidade básica da entidade account em uma compilação 
     *
     * Os testes abrangem:
     * - Nome válido.
     * - senha válida.
     * - CPF válido.
     * 
     */
    
class AccountSmokeTest {
    private :
        const string nameValid = "Forrest Gump";
        const string pwdValid = "5$Vali";
        const string cpfValid = "123.456.789-10";

        Account*accountInstance;
        int testState;

        void setUp();
        void tearDown();
        void testScenario();

        public:

    /**
     * @brief Executa todos os testes de fumaça para a entidade Account.
     *
     * Inicializa o ambiente de teste, executa os testes e libera os recursos utilizados.
     *
     * @return 
     * - true se todos os testes forem bem-sucedidos.
     * - false caso contrário.
     */
        bool run();
};