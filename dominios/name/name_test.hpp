#include "name.hpp"

using namespace std;

/**
 * @brief verifica a estabilidade e funcionalidade básica do dominio nome em uma compilação 
 *
 * Os testes abrangem:
 * - Nome válido.
 * - Nome com comprimento inválido.
 * - Nome com caracteres inválidos.
 * - Nome com espaços em branco consecutivos.
 *
 * @throw invalid_argument
 * 
 */
class NameSmokeTest {
    private:
       const string validName = "Eren Jaeger";
       const string invalidLengthName = "Roronoa Zoro no Ichibansenpai";
       const string invalidCharacterName = "Ichig@ Kurosak!";
       const string invalidSpacingName = "Tanjiro  Kamado";

       Name *nameInstance;
       bool testStatus;

       void setUp();
       void tearDown();

       void testValidName();
       void testInvalidLength();
       void testInvalidCharacter();
       void testInvalidSpacing();

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