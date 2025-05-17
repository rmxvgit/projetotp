#ifndef ORDEM_TESTE_HPP_INCLUDED
#define ORDEM_TESTE_HPP_INCLUDED

#include "ordem.hpp"
#include "../codigo/codigo.hpp"
#include "../data/data.hpp"
#include "../quantidade/quantidade.hpp"
#include "../negociarCode/negociarCode.hpp"
#include "../dinheiro/dinheiro.hpp"

/**
 * @class OrdemTeste
 * @brief Classe responsável por realizar testes unitários na classe Ordem.
 *
 * Esta classe executa cenários de teste para verificar se a classe Ordem
 * está funcionando corretamente. Ela define métodos para configurar o 
 * ambiente de teste, executar casos de sucesso e falha, e limpar os dados.
 */
class OrdemTeste {
private:
    Ordem *ordem;                 /**< Ponteiro para a instância da classe Ordem a ser testada. */
    bool todosTestesPassaram;     /**< Indica se todos os testes foram bem-sucedidos. */

    /**
     * @brief Configura o ambiente antes da execução de cada teste.
     */
    void setUp();

    /**
     * @brief Limpa o ambiente após a execução de cada teste.
     */
    void tearDown();

    /**
     * @brief Executa um cenário de teste esperado para sucesso.
     */
    void testarCenarioSucesso();

    /**
     * @brief Executa um cenário de teste esperado para falha.
     */
    void testarCenarioFalha();

public:
    /**
     * @brief Executa todos os testes da classe.
     * @return true se todos os testes passaram, false caso contrário.
     */
    bool run();
};

#endif // ORDEM_TESTE_HPP_INCLUDED