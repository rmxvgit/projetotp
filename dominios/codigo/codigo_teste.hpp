#include "codigo.hpp"

using namespace std;


/**
 * @brief verifica a estabilidade e funcionalidade básica do dominio codigo em uma compilação 
 *
 * Os testes abrangem:
 * - Codigo válido.
 * - Codigo com comprimento maior que o permitido.
 * - Código com comprimento menor que o permitido
 * - Código com caracteres inválidos.
 *
 * Lan&ccedil;a exce&ccedil;&atilde;o caso o codigo informado seja inv&aacute;lido.
 * @throw invalid_argument
 * 
 */
class CodigoSmokeTest {
    private:
       const string validCode = "123456789";
       const string invalidLengthCodeMax = "12345678910";
       const string invalidLengthCodeMin= "1234567";
       const string invalidCharacter = "abc";

       Codigo *codeInstacance;
       bool testStatus;

       void setUp();
       void tearDown();

       void testValidCode();
       void testInvalidLengthCodeMax();
       void testInvalidLengthCodeMin();
       void testInvalidCharacter();

    public:

      /**
     * @brief Executa todos os testes de fumaça para o domínio Name.
     *
     * Inicializa o ambiente de teste, executa os testes e libera os recursos utilizados.
     *
     * @return 
     * - true se todos os testes forem bem-sucedidos.
     * - false caso contrário.
     */
       bool run();
};