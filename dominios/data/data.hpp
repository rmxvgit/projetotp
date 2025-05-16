#pragma once
#include <string>

using namespace std;
/// Esta é a classe data, que tem o propósito de definir a data que será utilizada no processamento dos dados do programa.
/// Para melhor manipulação, data segue o padrão ano, mês e dia - AAAAMMDD
///
class Data{
    private:
        string data;
        /// @brief para validar a data, foram utlizados alguns critérios.
        ///primeiro, checa-se se o formato é válido - sem caracteres diferentes de números, ou a quantidade diferente do necessário para representação.
        ///depois, é checado o dia é válido tendo em vista o mês, por exemplo, junho só possui 30 dias, logo 31/06 é inválido.
        ///o mesmo foi feito considerando os anos bissextos.
        /// @param  
        void validarData(string);

    public:
        /// @brief 
        /// a funções Set e Get são simples e recebem e retornam o objeto.
        /// @param  
        void Set(string);
        string Get();
};
