#include <string>
#include "negociarCode.hpp"

bool codigoNegocio::testeValidez(const string& codN){
    if(codN.size() > limite){
        return false;
    }
    return true;

}
