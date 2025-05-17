#pragma once

#include "../cpf/cpf.hpp"
#include "../name/name.hpp"
#include "../password/password.hpp"


/**
 * @brief Entidade responsável por registrar e gerenciar as operações financeiras de um investidor.
 *
 * A entidade Account representa uma conta de usuário no sistema, armazenando informações essenciais
 * como CPF, nome e senha, todos validados conforme suas regras de domínio.
 *
 * Regras de formato:
 * - O CPF deve estar em formato válido.
 * - O nome deve ser válido, conforme as regras do domínio Name.
 * - A senha deve ser válida, conforme as regras do domínio Password.
 */
class Account{
    private :
        Cpf cpf;
        Name name;
        Password password;
    public :
          /**
         * @brief Construtor padrão.
         *
         * Inicializa o objeto com valores padrão (strings vazias).
         */
        Account();

    /**
     *
     * @brief Inicializa o objeto com os valores informados, realizando a validação de cada campo.
     *
     * @param string& name_str
     * @param string& cpf_str
     * @param string& password_str
     * 
     * Caso algum dos parâmetros seja inválido é lançado uma exceção
     * @throw invalid_argument 
     */
        Account(const string& name_str, const string& cpf_str,  const string& password_str);

        /**
        * @brief Define o nome da conta.
        * @param name name (Objeto Name já validado).
        */
        void setName(const Name& name);

        /**
         * @brief Define o nome da conta a partir de uma string.
         * 
         * Lança uma exceção caso o nome informado  seja inválido
         * @param name name_str.
         * @throw invalid_argument
         */
        void setName(const string& name);

        /**
         * @brief Define o CPF da conta.
         * @param cpf cpf (Objeto CPF já validado).
         */
        void setCpf(const Cpf& cpf);

        /**
         * @brief Define o CPF da conta a partir de uma string.
         * 
         * Lança uma exceção caso o nome informado  seja inválido
         * @param cpf cpf_str.
         * @throw invalid_argument
         */
        void setCpf(const string& cpf);

        /**
         * @brief Define a senha da conta.
         * @param password password (Objeto Password já validado).
         */
        void setPassword(const Password& password);

        /**
         * @brief Define a senha da conta a partir de uma string.
         * 
         * Lança uma exceção caso o nome informado  seja inválido
         * @param password password_str.
         * @throw invalid_argument .
         */
        void setPassword(const string& password_str);

        /**
         * @brief Retorna a referência para o objeto Name da conta.
         * @return name.
         */
        Name& getName();

        /**
         * @brief Retorna a referência para o objeto CPF da conta.
         * @return cpf.
         */
        Cpf& getCpf();

        /**
         * @brief Retorna a referência para o objeto Password da conta.
         * @return password.
         */
        Password& getPassword();
};

inline void Account :: setName(const Name& name){
    this->name = name;
}

inline void Account::setName(const string& name){
    this->name.Set(name);
}

inline void Account :: setCpf(const Cpf& cpf){
    this->cpf = cpf;
}

inline void Account :: setCpf(const string& cpf) {
    this->cpf.Set(cpf);
}

inline void Account :: setPassword(const Password& password){
    this->password = password;
}

inline void Account :: setPassword(const string& password){
    this->password.Set(password);
}

inline Name& Account :: getName(){
    return name;
}

inline Cpf& Account :: getCpf(){
    return cpf;
}

inline Password& Account :: getPassword(){
    return password;
}
