#include "senha.hpp"

#include <string>
#include <regex>
#include <set>
#include <cctype>

using namespace std;


string Senha::Get(){
    return this->password;
}

bool Senha::validate(const string& password){
    if (password.length() != 6 ) return false;

    regex pattern("^[A-Za-z0-9#\\$%&]{6}$");
    if (!regex_match(password, pattern)) return false;

    set<char> characters(password.begin(), password.end());
    if (characters.size() != 6) return false;

    bool isDigit = false, isUpper = false, isLower = false, isSpecial = false;

    for (char c : password) {
        if (isdigit(c)) isDigit = true;
        else if (isupper(c)) isUpper = true;
        else if (islower(c)) isLower = true;
        else if (c == '#' || c == '$' || c == '%' || c == '&') isSpecial = true;
    }

    return isDigit && isUpper && isLower && isSpecial;

}

bool Senha::Set(const string& password){
    if (!validate(password)) return false;
    this->password = password;
    return true;
}

Senha::Senha() {
    this->password = "";
}

Senha::Senha(const string&  password) {
    if (!validate(password)) {/* erro */};
    this->password = password;
}
