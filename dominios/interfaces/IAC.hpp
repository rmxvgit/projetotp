#ifndef IAACCOUNT_HPP
#define IAACCOUNT_HPP

#include <iostream>
#include "../Entidades/account.hpp"

using namespace std;

/**
 * @brief Interface apresentação-conta
 * Permite que o usuário tenha acesso a recursos específicos do sistema
 */
class IAAccount {
public:
    /**
     * @brief Cria uma nova conta através da interação com o usuário
     *
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

#endif // IAACCOUNT_HPP
