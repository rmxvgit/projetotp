#pragma once

#include <cstdint>
#include <string>

using namespace std;

/// Classe responsável por armazenar e gerenciar um número de CPF válido.
/// O CPF é armazenado como string contendo apenas dígitos (11 caracteres).
/// Realiza validação automática ao atribuir novos valores.
/// Lança exceção em caso de CPF inválido.

class Cpf {
    private:
        string cpf; // cpf (somente dígitos)

        bool validateCPF(const string& cpf_str);
        string cleanCPF(const string& cpf_sr);
        string addPadding(const string& cpf_str);
    public:
        static const int CPF_NUM_DIGITS = 11;

        /// Construtores:
        Cpf();
        Cpf(const string& cpf_str);
        Cpf(const uint64_t cpf_num);

        /// Retorna o CPF formatado (xxx.xxx.xxx-xx)
        string Get();

        /// Retorna o CPF como número inteiro
        uint64_t GetNum();

        /// Atribui novo valor ao CPF (com validação)
        void Set(const string& cpf_str);
        void Set(const uint64_t cpf_num);

        /// Operadores de comparação
        bool operator==(const Cpf& other);
        bool operator==(const string& other);
        bool operator==(const uint64_t other);
};
