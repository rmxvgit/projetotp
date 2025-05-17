#ifndef USRCODE_TESTE_HPP_INCLUDED
#define USRCODE_TESTE_HPP_INCLUDED

#include "usrCode.hpp"
#include <string>

/// Classe responsável pelos testes unitários da classe UsrCode.
/// Verifica o comportamento da classe em diferentes cenários de uso,
/// incluindo valores válidos e inválidos conforme as regras de negócio.

class UsrCodeTeste {
private:
    // Valores de teste pré-definidos
    const std::string CODIGO_VALIDO_STR = "12345";
    const std::string CODIGO_VALIDO_STR_COM_ZEROS = "00123";
    const uint32_t CODIGO_VALIDO_NUM = 54321;
    const std::string CODIGO_INVALIDO_STR_LONGO = "123456";
    const std::string CODIGO_INVALIDO_STR_CURTO = "123";
    const std::string CODIGO_INVALIDO_STR_CARACTERES = "12a45";
    const uint32_t CODIGO_INVALIDO_NUM_GRANDE = 100000;
    const uint32_t CODIGO_INVALIDO_NUM_NEGATIVO = -1;

    /// Instância da classe UsrCode sob teste
    UsrCode *usrCode;

    /// Indicador do resultado geral dos testes
    bool todosTestesPassaram;

    /// Prepara o ambiente de teste antes da execução
    void setUp();

    /// Libera recursos após a execução dos testes
    void tearDown();

    /// Executa testes com valores válidos de código
    void testarCenarioSucesso();

    /// Executa testes com valores inválidos de código
    void testarCenarioFalha();

    /// Testa os operadores de comparação
    void testarOperadores();

public:
    /// Controla a execução de todos os testes da classe
    /// @return true se todos os testes passaram, false caso contrário
    bool run();
};

#endif // USRCODE_TESTE_HPP_INCLUDED
