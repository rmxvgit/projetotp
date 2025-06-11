#include <iostream>
#include "../Entidades/account.hpp"

using namespace std;

/**
 * @brief Interface apresentação-conta
 * Permite que o usuário tenha acesso a recursos específicos da entidade conta
 */
class IAAccount {
public:
    /**
     * @brief Método responsável por criar uma conta
     * @param Account
     */
    virtual void create() = 0;

    /**
     * @brief Método por meio do qual é solicitado o serviço
     * @param Cpf Ponteiro para um cpf
     */
    virtual void execute(Cpf*) = 0;

    /**
     * @brief Método destrutor virtual
     */
    virtual ~IAAccount() {};
};
