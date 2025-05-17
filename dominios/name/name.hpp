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
 * - Cada caracter pode ser dígito de (0 à 9), letra (A – Z ou a – z) ou espaços em branco.
 * 
 * - Não é permitido pontuação como vírgula, pontos, acentos, sinais gráficos e etc...
 *
 * - Não pode existir uma seguência de espaços em branco.
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
         * @brief Construtor padrão.
         * 
         * Inicializa o objeto com uma string vazia ("").
         */
        Name();

        /**
         *
         * @brief Inicializa o objeto com o nome informado, caso  o mesmo seja válido.
         * 
         * O nome é validado de acordo com as regras estabelecidas.
         *
         * @param name userName.
         * @throw invalid_argument 
         */
        Name(const string &);

        /**
         * @brief Retorna o nome informado.
         * @return name.
         */
        string Get();

        /** 
         * @brief Armazena o nome informado caso o mesmo seja v&aacute;lido.
         * 
         * Lan&ccedil;a exce&ccedil;&atilde;o caso o nome informado seja inv&aacute;lido.
         * 
         * @param name userName
         * 
         * @throw invalid_argument
         * 
         * */ 

        void Set(const string &);
};

inline string Name::Get(){
    return name;
}
