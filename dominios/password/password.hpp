#pragma once

#include <string>

using namespace std;

/**
 * @brief Sequência secreta de caracteres utilizada para autenticar um usuário e conceder-lhe acesso a recursos ou funções protegidas
 *
 *  Regras de formato:
 *
 * - Seis caracteres.
 * - Cada caracter pode ser dígito (0 – 9), letra (A – Z ou a – z), #, $, % ou &.
 * - Não há caracter duplicado.
 * - Existe pelo menos um dígito (0 – 9).
 * - Existe pelo menos uma letra maiúscula (A – Z).
 * - Existe pelo menos uma letra minúscula (a – z).
 * - Existe pelo menos um caracter especial (#, $, % ou &).
 * 
 */
class Password{
    private:
        string password;

        bool validate(const string&);

    public:
         /**
         * @brief Construtor padrão.
         * 
         * Inicializa o objeto com uma string vazia ("").
         */
        Password();

        /**
         *
         * @brief Inicializa o objeto com a senha informada, caso  o mesma seja válida.
         * 
         * A senha é validado de acordo com as regras estabelecidas.
         *
         * @param  password password.
         * @throw invalid_argument 
         */
        Password(const string&);


        /**
         * @brief Retorna a senha informada.
         * @return password
         */
        string Get();

          /** 
         * @brief Armazena a senha informada caso a mesma seja v&aacute;lida.
         * 
         * Lan&ccedil;a exce&ccedil;&atilde;o caso a senha informada seja inv&aacute;lida.
         * 
         * @param password password
         * 
         * @throw invalid_argument
         * 
         * */ 
        void Set(const string&);
};
