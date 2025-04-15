#ifndef CPF_HPP_INCLUDED
#define CPF_HPP_INCLUDED

#endif // CPF_HPP_INCLUDED

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
        const int CPF_NUM_DIGITS = 11;

        Cpf(const string& cpf_str);
        Cpf(const uint64_t cpf_num);

        string GetStr(); // equivalente a um get. Retorna o cpf formatado
        uint64_t GetNum();
        void Set(const string& cpf_str);

        bool operator==(const Cpf& other);
        bool operator==(const string& other);
        bool operator==(const uint64_t other);
};
