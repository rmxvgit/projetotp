#ifndef NEGOCIARCODE_HPP_INCLUDED
#define NEGOCIARCODE_HPP_INCLUDED

using namespace std;

class codigoNegocio{
    private:

            static const int limite = 12;
            string codN;
    public:
            bool testeValidez(string);
            string getCod();
            bool setCod(string);

};

inline string codigoNegocio::getCod(){
    return codN;

}

inline bool codigoNegocio::setCod(string codn){
    if(testeValidez(codn)){
        codN = codn;
        return true;
    }else{
        return false;
    }

}

#endif // NEGOCIARCODE_HPP_INCLUDED
