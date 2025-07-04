#ifndef ISACCOUNT_HPP
#define ISACCOUNT_HPP

#include <iostream>
#include "../interfaces/IAC.hpp"

using namespace std;

/**
 * @brief Interface que define os serviços relacionados ao gerenciamento de contas.
 * 
 * Esta interface define as operações básicas CRUD (Create, Read, Update, Delete)
 * para manipulação de contas no sistema.
 */
class ISAccount {
    public:
     /**
     * @brief Solicita a criação de uma nova conta.
     * 
     * @param Acount contem os dados da conta a serem criados.
     * @return 
     * -true se a conta for criada com sucesso
     * -false caso contrário.
     */
    virtual bool create(const Account& ) = 0;

    /**
     * @brief Solicita a leitura dos dados de uma conta existente.
     * 
     * @param Account Ponteiro para onde os dados lidos serão armazenados.
     * @return 
     * -true se a conta for encontrada e os dados forem carregados
     * -false caso contrário.
     */
    virtual bool read(Account* ) = 0;

    /**
     * @brief Solicita a edição dos dados de uma conta existente.
     * 
     * @param Account contem os dados da conta que serão atualizados.
     * @return 
     * -true se a conta for editada com sucesso
     * -false caso contrário.
     */
    virtual bool update(const Account& ) = 0;

    /**
     * @brief Solicita a exclusão de uma conta.
     * 
     * @param Cpf identifica a conta a ser excluída.
     * @return 
     * -true se a conta for excluída com sucesso
     * -false caso contrário.
     */
    virtual bool remove(const Cpf& ) = 0;

     /**
     * @brief Método destrutor virtual Interface Serviço Conta
     */
    virtual ~ISAccount() {};

};
#endif // ISACCOUNT_HPP

