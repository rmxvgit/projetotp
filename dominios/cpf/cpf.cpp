#include "cpf.hpp"
#include <cstdint>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool Cpf::validateCPF(const string& cpf_str) {
    string clean_cpf = cleanCPF(cpf_str);
    if (cpf_str.length() != CPF_NUM_DIGITS) return false;
    return true;
}

string Cpf::cleanCPF(const string& cpf_str) {
    string clean_cpf = "";
    for (const char& ch : cpf_str) {
        if ('0' <=ch && ch <= '9') {
            clean_cpf += ch;
        }
    }
    return clean_cpf;
}

string Cpf::addPadding(const string& cpf_str) {
    string clean_cpf = cleanCPF(cpf_str);
    int num_of_chars_missing = CPF_NUM_DIGITS - clean_cpf.length();

    if (num_of_chars_missing <= 0) {
        return  cpf_str;
    }

    string padded_str = "";
    for (int i = 0; i < num_of_chars_missing; i++) {
        padded_str += '0';
    }
    padded_str += clean_cpf;

    return padded_str;
}

// Inicializadores:
// WARNING: tem efeito colateral
Cpf::Cpf(const string& cpf_str) {
    string clean_cpf = addPadding(cleanCPF(cpf_str));

    if (cpf_str.length() != CPF_NUM_DIGITS) {/* erro */}

    this->cpf = clean_cpf;
}

// WARNING: tem efeito colateral
Cpf::Cpf(const uint64_t cpf_num) {
    string cpf_str = "";
    stringstream cpf_stream = stringstream();
    cpf_stream << cpf_num;
    cpf_stream >> cpf_str;
    this->cpf = addPadding(cpf_str);
}

// Equivalente a um get
string Cpf::GetStr() {
    string show_cpf = this->cpf;
    string::iterator begining = show_cpf.begin();
    show_cpf.insert(begining + 9, '-');
    show_cpf.insert(begining + 6, '.');
    show_cpf.insert(begining + 3, '.');
    return show_cpf;
}

uint64_t Cpf::GetNum() {
    uint64_t cpf_num;
    stringstream cpf_stream = stringstream(this->cpf);
    cpf_stream >> cpf_num;
    return cpf_num;
}

void Cpf::Set(const string& cpf_str) {
    string clean_cpf = addPadding(cleanCPF(cpf_str));

    if (cpf_str.length() != CPF_NUM_DIGITS) {/* erro */}

    this->cpf = clean_cpf;
}

bool Cpf::operator==(const Cpf& other) {
    return other.cpf == this->cpf;
}

bool Cpf::operator==(const string& other) {
    string other_cpf_str = addPadding(cleanCPF(other));
    return this->cpf == other_cpf_str;
}

bool Cpf::operator==(const uint64_t other) {
    string cpf_str = "";
    stringstream cpf_stream = stringstream();
    cpf_stream << other;
    cpf_stream >> cpf_str;
    return addPadding(cpf_str) == this->cpf;
}
