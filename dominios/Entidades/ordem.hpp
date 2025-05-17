#pragma once

#include "../dinheiro/dinheiro.hpp"
#include "../quantidade/quantidade.hpp"
#include "../codigo/codigo.hpp"
#include "../negociarCode/negociarCode.hpp"
#include "../data/data.hpp"

/**
 * @class Ordem
 * @brief Representa uma ordem de negociação com informações como código, data, quantidade, tipo de negociação e preço.
 */
class Ordem {
private:
    Codigo        codigo;        /**< Código da ordem. */
    Data          data;          /**< Data da ordem. */
    Quantidade    quantidade;    /**< Quantidade negociada. */
    codigoNegocio negociacao;    /**< Código do tipo de negociação. */
    Dinheiro      preco;         /**< Preço da ordem. */

public:
    /**
     * @brief Construtor padrão.
     */
    Ordem();

    /**
     * @brief Construtor que inicializa todos os atributos da ordem.
     * @param codigo Código da ordem.
     * @param quantidade Quantidade da ordem.
     * @param tipoNegociacao Tipo de negociação.
     * @param preco Preço da ordem.
     * @param data Data da ordem.
     */
    Ordem(const std::string& codigo, int quantidade, const std::string& tipoNegociacao, float preco, const std::string& data);

    /// @name Métodos setters
    /// @{

    /**
     * @brief Define o código da ordem.
     * @param codigo Objeto do tipo Codigo.
     */
    void setCodigo(const Codigo& codigo);

    /**
     * @brief Define o código da ordem.
     * @param codigo String representando o código.
     */
    void setCodigo(const std::string& codigo);

    /**
     * @brief Define a quantidade da ordem.
     * @param quantidade Objeto do tipo Quantidade.
     */
    void setQuantidade(const Quantidade& quantidade);

    /**
     * @brief Define a quantidade da ordem.
     * @param quantidade Valor inteiro da quantidade.
     */
    void setQuantidade(int quantidade);

    /**
     * @brief Define o código da negociação.
     * @param codNegocio Objeto do tipo codigoNegocio.
     */
    void setCodigoNegocio(const codigoNegocio& codNegocio);

    /**
     * @brief Define o código da negociação.
     * @param codNegocio String representando o tipo de negociação.
     */
    void setCodigoNegocio(const std::string& codNegocio);

    /**
     * @brief Define o preço da ordem.
     * @param preco Objeto do tipo Dinheiro.
     */
    void setPreco(const Dinheiro& preco);

    /**
     * @brief Define o preço da ordem.
     * @param preco Valor em ponto flutuante.
     */
    void setPreco(float preco);

    /**
     * @brief Define a data da ordem.
     * @param data Objeto do tipo Data.
     */
    void SetData(const Data& data);

    /**
     * @brief Define a data da ordem.
     * @param data String representando a data.
     */
    void SetData(const std::string& data);

    /// @}
    /// @name Métodos getters
    /// @{

    /**
     * @brief Retorna a quantidade da ordem.
     * @return Referência para o objeto Quantidade.
     */
    inline Quantidade& getQuantidade();

    /**
     * @brief Retorna o código da ordem.
     * @return Referência para o objeto Codigo.
     */
    inline Codigo& getCodigo();

    /**
     * @brief Retorna o código de negociação.
     * @return Referência para o objeto codigoNegocio.
     */
    inline codigoNegocio& getNegociacao();

    /**
     * @brief Retorna o preço da ordem.
     * @return Referência para o objeto Dinheiro.
     */
    inline Dinheiro& getPreco();

    /**
     * @brief Retorna a data da ordem.
     * @return Referência para o objeto Data.
     */
    inline Data& getData();

    /// @}
};

// Implementações inline

inline Quantidade& Ordem::getQuantidade() {
    return this->quantidade;
}

inline Codigo& Ordem::getCodigo() {
    return this->codigo;
}

inline Data& Ordem::getData() {
    return this->data;
}

inline codigoNegocio& Ordem::getNegociacao() {
    return this->negociacao;
}

inline Dinheiro& Ordem::getPreco() {
    return this->preco;
}
