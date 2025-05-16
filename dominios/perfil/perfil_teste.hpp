#ifndef PERFIL_TESTE_HPP_INCLUDED
#define PERFIL_TESTE_HPP_INCLUDED

#include "perfil.hpp"

/// Classe responsável por testar a funcionalidade da classe Perfil.
/// Realiza testes unitários para verificar o comportamento dos métodos
/// em cenários válidos e inválidos de operação.

class PerfilTeste {
private:
    /// Instância da classe Perfil usada nos testes
    Perfil *perfil;

    /// Flag que indica o resultado geral dos testes
    bool todosTestesPassaram;

    /// Configura o ambiente de teste antes da execução
    void setUp();

    /// Limpa o ambiente de teste após a execução
    void tearDown();

    /// Testa cenários de operação válidos
    void testarCenarioSucesso();

    /// Testa cenários de operação inválidos
    void testarCenarioFalha();

public:
    /// Executa todos os testes unitários e retorna true se todos passaram
    bool run();
};

#endif // PERFIL_TESTE_HPP_INCLUDED
