#pragma once
#include <string>

using namespace std;
/// Esta é a classe data, que tem o propósito de definir a data que será utilizada no processamento dos dados do programa.
/// Para melhor manipulação, data segue o padrão ano, mês e dia - AAAAMMDD
/// para validar a data, foram utlizados alguns critérios.
///primeiro, checa-se se o formato é válido - sem caracteres diferentes de números, ou a quantidade diferente do necessário para representação.
///depois, é checado o dia é válido tendo em vista o mês, por exemplo, junho só possui 30 dias, logo 31/06 é inválido.
///o mesmo foi feito considerando os anos bissextos.
///se algum desses critérios não forem atendidos, o método a seguir lança uma excessão.

class Data{
    private:
        string data;
        
        void validarData(string);

    public:
        /// Get() retorna o valor armazenado.
        /// Set() valida e atribui um novo valor, lançando exceção se inválido.  
        void Set(string);
        string Get();
};
