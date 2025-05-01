#include <string>
#include "negociarCode.hpp"
#include <stdexcept>

void codigoNegocio::testeValidez(const string& codN){
    if(codN.size() > limite){
        throw invalid_argument("codigo de negociacao invalido");
    }
}
