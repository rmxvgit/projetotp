#include "password.hpp"

using namespace std;

/**
 * @brief verifica a estabilidade e funcionalidade básica do dominio password em uma compilação 
 *
 * Os testes abrangem:
 * - Senha válido.
 * - Senha com comprimento inválido.
 * - Senha com caracteres inválidos.
 * - Senha com caracteres duplicados.
 * - Senha sem números
 * - Senha sem letras maiúsculas 
 * - Senha sem letras minúsculas 
 * - Senha sem caracteres especiais
 *
 * @throw invalid_argument
 * 
 */
class PasswordSmokeTest {
    private:

        //PASSWORD = PWD
        const string validPwd = "Val$d3";
        const string invalidLengthPwd = "#1Er";
        const string invalidCharPwd = "@2Erro";
        const string duplicateCharPwd = "&&3Err";
        const string noNumberPwd = "$Error";
        const string noUpperCasePwd = "5e%rro";
        const string noLowerCasePwd = "6&ERRO";
        const string noSpecialCharPwd = "7Error";

        Password *pwd;
        int testState;

        void setUp();
        void tearDown();

        void testValidPwd();
        void testLengthInvalidPwd();
        void testInvalidCharPwd();
        void testDuplicateCharPwd();
        void testNoNumberPwd();
        void testNoUpperCasePwd();
        void testNoLowerCasePwd();
        void testNoSpecialCharPwd();

    public:
    /**
     * @brief Executa todos os testes de fumaça para o domínio Password.
     *
     * Inicializa o ambiente de teste, executa os testes e libera os recursos utilizados.
     *
     * @return 
     * - true se todos os testes forem bem-sucedidos.
     * - false caso contrário.
     */
        bool run();
};
