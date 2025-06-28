#ifndef IAACCOUNT_HPP
#define IAACCOUNT_HPP

#include <iostream>
#include "../Entidades/account.hpp"



using namespace std;

class ISAccount;

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
     * @brief Solicita e executa operações relacionadas à conta para o CPF informado.
     * @param Cpf Ponteiro para um objeto que identifica o usuário.
     */
    virtual void execute(Cpf*) = 0;

    /**
     * @brief Método destrutor virtual Interface Apresentação Conta
     */
    virtual ~IAAccount() {};

    /**
     * @brief Estabelece a ligação com a controladora de serviço de conta.
     * @param ISAccount Ponteiro para a interface de serviço de conta.
     */
    virtual void setCntrAccount(ISAccount *) = 0;
};

#endif // IAACCOUNT_HPP
