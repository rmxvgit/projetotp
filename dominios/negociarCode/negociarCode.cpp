#include <string>
#include "negociarCode.hpp"
#include <stdexcept>

void codigoNegocio::testeValidez(const string& codN){
    if(codN.size() > limite){
        throw invalid_argument("codigo de negociação muito grande.");
    }

    for (const char& c: codN) {
        if (!isNumeric(c) && !isLetter(c)) {
            throw invalid_argument("código de negócio contém caracteres não alfa-numéricos.");
        }
    }
}

bool codigoNegocio::isNumeric(const char& c) {
    if (c < '0' || c > '9'){
        return false;
    }
    return true;
}

bool codigoNegocio::isLetter(const char& c) {
    if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A')){
        return true;
    }
    return false;
}
