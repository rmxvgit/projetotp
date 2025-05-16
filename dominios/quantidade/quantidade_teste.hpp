#ifndef QUANTIDADE_TESTE_HPP_INCLUDED
#define QUANTIDADE_TESTE_HPP_INCLUDED

#include "quantidade.hpp"

/// Classe responsável pelos testes unitários da classe Quantidade.
/// Verifica o comportamento da classe em diferentes cenários de uso,
/// incluindo valores válidos e inválidos conforme as regras de negócio.

class QuantidadeTeste {
private:
    // Valores de teste pré-definidos
    const int QUANTIDADE_VALIDA = 1000;
    const int QUANTIDADE_INVALIDA_NEGATIVA = -1;
    const int QUANTIDADE_INVALIDA_ZERO = 0;
    const int QUANTIDADE_INVALIDA_ACIMA_LIMITE = 1000001;

    /// Instância da classe Quantidade sob teste
    Quantidade *quantidade;

    /// Indicador do resultado geral dos testes
    bool todosTestesPassaram;

    /// Prepara o ambiente de teste antes da execução
    void setUp();

    /// Libera recursos após a execução dos testes
    void tearDown();

    /// Executa testes com valores válidos de quantidade
    void testarCenarioSucesso();

    /// Executa testes com valores inválidos de quantidade
    void testarCenarioFalha();

public:
    /// Controla a execução de todos os testes da classe
    /// @return true se todos os testes passaram, false caso contrário
    bool run();
};

#endif // QUANTIDADE_TESTE_HPP_INCLUDED
