#include <string>
#include "negociarCode.hpp"

bool codigoNegocio::testeValidez(string codN){
    if(codN.size() > limite){
        return false;
    }
    return true;

}
