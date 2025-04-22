#ifndef NEGOCIARCODE_HPP_INCLUDED
#define NEGOCIARCODE_HPP_INCLUDED

#include <string>

using namespace std;

class codigoNegocio{
    private:
            static const int limite = 12;
            string codN;
    public:
            bool testeValidez(const string&);
            string getCod();
            bool setCod(const string&);

};

inline string codigoNegocio::getCod(){
    return codN;

}

inline bool codigoNegocio::setCod(const string& codn){
    if(testeValidez(codn)){
        codN = codn;
        return true;
    }else{
        return false;
    }

}

#endif // NEGOCIARCODE_HPP_INCLUDED
