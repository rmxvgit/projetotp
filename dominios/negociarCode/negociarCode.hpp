#ifndef NEGOCIARCODE_HPP_INCLUDED
#define NEGOCIARCODE_HPP_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class codigoNegocio{
    private:
            static const int limite = 12;
            string codN;
    public:
            void testeValidez(const string&);
            string getCod();
            void setCod(const string&);

};

inline string codigoNegocio::getCod(){
    return codN;

}

inline void codigoNegocio::setCod(const string& codn){
    testeValidez(codn);
    this->codN = codn;
}
        



#endif // NEGOCIARCODE_HPP_INCLUDED
