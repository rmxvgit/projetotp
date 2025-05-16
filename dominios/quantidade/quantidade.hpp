#pragma once

/// Classe responsável por armazenar e validar uma quantidade numérica.
/// Garante que o valor seja sempre um número inteiro positivo.
/// Realiza validação automática ao atribuir novos valores.

class Quantidade {
    private:
        int quantidade;  /// Armazena o valor numérico da quantidade

        /// Valida se o valor é um número inteiro positivo
        /// @param valor Valor a ser validado
        /// @return true se válido, false caso contrário
        bool validate(int valor);

    public:
        /// Obtém o valor atual da quantidade
        /// @return Valor inteiro armazenado
        int Get();

        /// Define um novo valor para a quantidade
        /// @param valor Novo valor a ser armazenado (deve ser positivo)
        void Set(int valor);
};
