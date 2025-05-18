#ifndef NEGOCIARCODE_HPP_INCLUDED
#define NEGOCIARCODE_HPP_INCLUDED

#include <string>

using namespace std;
/// Esta classe tem como objetivo definir o código de negociação do cliente.
/// O código de negociação pode é um conjunto de caracteres que variam entre números e letras, e qualquer outro caractere que não seja alfanumérico é dado como inválido, e uma excessão é lançada.
            
class codigoNegocio{
    private:
            static const int limite = 12;
            string codN;
           
    
            void testeValidez(const string&); 
            
            bool isNumeric(const char& c);
            bool isLetter(const char& c);
    public:
            /// Get() retorna o valor armazenado.
            string Get();
            /// Set() valida e atribui um novo valor, lançando exceção se inválido.  
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
