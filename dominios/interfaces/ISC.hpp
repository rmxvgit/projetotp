#ifndef ISACCOUNT_HPP
#define ISACCOUNT_HPP

#include <iostream>
#include "../Entidades/account.hpp"

using namespace std;

/**
 * @brief Interface que define os serviços relacionados ao gerenciamento de contas.
 * 
 * Esta interface define as operações básicas CRUD (Create, Read, Update, Delete)
 * para manipulação de contas no sistema.
 */
class ISAccount {
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
     * @param account Ponteiro para um objeto Account onde os dados lidos serão armazenados.
     * @return 
     * -true se a conta for encontrada e os dados forem carregados
     * -false caso contrário.
     */
    virtual bool read(Account* ) = 0;

    /**
     * @brief Solicita a edição dos dados de uma conta existente.
     * 
     * @param account Objeto Account contendo os dados atualizados da conta.
     * @return 
     * -true se a conta for editada com sucesso
     * - false caso contrário.
     */
    virtual bool edit(const Account& account) = 0;

    /**
     * @brief Solicita a exclusão de uma conta.
     * 
     * @param cpf Objeto Cpf identificando a conta a ser excluída.
     * @return 
     * -true se a conta for excluída com sucesso
     * -false caso contrário.
     */
    virtual bool remove(const Cpf& cpf) = 0;
};
#endif // ISACCOUNT_HPP

