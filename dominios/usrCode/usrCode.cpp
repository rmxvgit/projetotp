#include "usrCode.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <sys/types.h>

using namespace std;


// validação do formato do código
bool UsrCode::validateCodeStr(const string& code_str) {
    string num_str_formated = addPaddingToCodeStr(code_str);
    for (const char& ch : num_str_formated) {
        if (ch < '0' || '9' < ch) return false;
    }
    return true;
}


// garante que a string de código possuirá o número especificado de dígitos.
// Ex: 45 ---> 00045
string UsrCode::addPaddingToCodeStr(const string& code_str) {
    string result_string = "";
    int paddingSize = NUMBER_OF_DIGITS - code_str.length();

    if (paddingSize < 0) {/* erro */}

    for (int i = 0; i <  paddingSize; i++) {
        result_string += "0";
    }

    result_string += code_str;

    return result_string;
}


UsrCode::UsrCode(const string& usr_code_str) {
    if (!validateCodeStr(usr_code_str)) {/* error */};
    stringstream str_stream = stringstream(usr_code_str);
    str_stream >> code_number;
}


UsrCode::UsrCode(uint32_t user_code) {
    if (user_code > LARGEST_NUM_REPRESENTABLE){/* erro */}
    code_number = user_code;
};


// retorna o code_number na forma de string
string UsrCode::getStr() {
    string result_str = "";
    stringstream str_stream = stringstream();
    str_stream << code_number;
    str_stream >> result_str;
    result_str = addPaddingToCodeStr(result_str);
    return result_str;
}


inline uint32_t UsrCode::getNum() {
    return code_number;
}


void UsrCode::set(const string& num_str) {
    if (!validateCodeStr(num_str)) {/* error */}
    stringstream str_stream = stringstream(num_str);
    str_stream >> code_number;
}


void UsrCode::set(const uint32_t user_code) {
    if (user_code > LARGEST_NUM_REPRESENTABLE){/* erro */}
    code_number = user_code;
}


inline bool UsrCode::operator==(const UsrCode& other) {
    return other.code_number == code_number;
}


bool UsrCode::operator==(const string& other) {
    if (!validateCodeStr(other)) {/* error */}
    uint32_t other_number;
    stringstream str_stream = stringstream(other);
    str_stream >> other_number;
    return other_number == code_number;
}


inline bool UsrCode::operator==(const int32_t other) {
    return other == code_number;
}
