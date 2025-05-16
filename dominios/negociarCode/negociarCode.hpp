#ifndef NEGOCIARCODE_HPP_INCLUDED
#define NEGOCIARCODE_HPP_INCLUDED

#include <string>

using namespace std;
/// Esta classe tem como objetivo definir o código de negociação do cliente.
/// O código de negociação pode é um conjunto de caracteres que variam entre números e letras.


class codigoNegocio{
    private:
            static const int limite = 12;
            string codN;
            ///  O método testeValidez tem como objetivo validar o código de negociação de acordo com as regras citadas anteriormente.
            ///  
            void testeValidez(const string&); 
            /// Os seguintes métodos tem como objetivo checar se o código possui apenas caracteres alfanuméricos. 
            /// Duas condições são definidas: se é numérico ou composto por letras, e se ambas forem falsas, quer dizer que existem caracteres inválidos.
            /// As funções são do tipo bool, e recebem como argumento, passando por referência, um caracter da string, que é checado, e o valor é retornado como true ou false de acordo com os parâmetros ditos.
            /// Casos as condições não sejam seguidas, o método lança uma excessão de falha.
            bool isNumeric(const char& c);
            bool isLetter(const char& c);
    public:

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
