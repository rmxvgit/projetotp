#include "../cpf/cpf.hpp"
#include "../password/password.hpp"
/***
 *  @brief Interface Serviço-Autenticação(ISA)
 * 
 */

class ISA{
    public:
    /***
     * @brief Método de autenticar, recebe uma Senha e um Cpf
     * @param Cpf domínio cpf.
     * @param Password domínio de uma senha
     * @returns bool caso autenticado ou não
     */
        virtual bool autenticate(Cpf, Password)  =  0; 

        /***
         * @brief Destrutor padrão
         */
        virtual ~ISA(){}; 
};
