#pragma once

#include <cstdint>
#include <string>

using namespace std;

class Cpf {
    private:
        string cpf; // cpf (somente dígitos)

        bool validateCPF(const string& cpf_str);
        string cleanCPF(const string& cpf_sr);
        string addPadding(const string& cpf_str);
    public:
        static const int CPF_NUM_DIGITS = 11;

        Cpf();
        Cpf(const string& cpf_str);
        Cpf(const uint64_t cpf_num);

        string Get(); // equivalente a um get. Retorna o cpf formatado
        uint64_t GetNum();
        void Set(const string& cpf_str);
        void Set(const uint64_t cpf_num);

        bool operator==(const Cpf& other);
        bool operator==(const string& other);
        bool operator==(const uint64_t other);
};
