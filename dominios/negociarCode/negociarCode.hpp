#ifndef NEGOCIARCODE_HPP_INCLUDED
#define NEGOCIARCODE_HPP_INCLUDED

#include <string>

using namespace std;

class codigoNegocio{
    private:
            static const int limite = 12;
            string codN;
    public:
            void testeValidez(const string&);
            string Get();
            void Set(const string&);

};

inline string codigoNegocio::Get(){
    return codN;

}

inline void codigoNegocio::Set(const string& codn){
    testeValidez(codn);
    this->codN = codn;
}




#endif // NEGOCIARCODE_HPP_INCLUDED
