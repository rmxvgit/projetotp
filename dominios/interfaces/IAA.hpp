#include "../cpf/cpf.hpp"
/***
 *  @brief Interface aprensetação-autenticação(IAA)
 * 
 */

class IAA{
    public:
    /***
     * @brief Método de autenticar, recebe um ponteiro para um Cpf
     * @param Cpf Ponteiro para um cpf.
     * @returns bool caso autenticado ou não
     */
        virtual bool autenticate(Cpf*)  =  0; 

        /***
         * @brief Destrutor padrão
         */
        virtual ~IAA(){}; 
};
