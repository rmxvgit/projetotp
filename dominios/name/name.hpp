/*------------------------------------------------------------------------------------
                O nome digitado pelo usuario deve respeitar as regras a seguir
-->Texto com até 20 caracteres.
-->Cada caracter pode ser dígito (0 – 9), letra (A – Z ou a – z) ou espaço em branco.
-->Não podem existir espaços em branco em sequência.
----------------------------------------------------------------------------------------*/

#pragma once
#include <string>

using namespace std;

/**
 * @brief Identificação única de um usuário em um determinado sistema, plataforma ou serviço online
 *
 *  Regras de formato:
 *
 * - A string que representa o nome do usuário não pode ter mais de 20 caracteres.
 *
 * - Cada caracter pode ser dígito de 0 à 9), letra (A – Z ou a – z) ou espaço em branco.
 * 
 * - Não é permitido pontuação como vírgula, pontos, acentos, sinais gráficos e etc...
 *
 * - Não pode existir uma seguência de espaços em branco.
 * 
 * 
 */

class Name{
    private :
        static const int MAXIMUM_LENGTH = 20;

        string name;

        bool hasConsecutiveSpaces(const string &);
        bool hasInvalidCharacters(const string &);
        bool validator(const string &);

    public:
        /**
         * @brief Inicializa o objeto com ""
         */
        Name();

        /**
 * @brief Construtor que inicializa o objeto com o nome informado, caso seja válido.
 *
 * Este construtor valida o nome fornecido de acordo com as regras estabelecidas.
 *
 * @param name Nome de usuário a ser atribuído ao objeto.
 *
 * @throw invalid_argument("The user's name cannot contain more than 20 characters.")
 * @throw invalid_argument("The user's name cannot have consecutive spaces.")
 * @throw invalid_argument("The user's name cannot contain special characters.")
 */
        Name(const string &);

        /**
         * @brief Retorna o nome informado.
         * @return name.
         */
        string Get();
        void Set(const string &);
};

inline string Name::Get(){
    return name;
}
