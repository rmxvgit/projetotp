#ifndef PERFIL_HPP_INCLUDED
#define PERFIL_HPP_INCLUDED

#include <string>

/// Classe responsável por representar o perfil de investimento de um cliente.
/// Oferece três tipos de perfil pré-definidos: CONSERVADOR, MODERADO e AGRESSIVO.
/// Permite armazenar, recuperar e converter para string o perfil do investidor.

class Perfil {
public:
    /// Enumeração que define os tipos de perfil de investimento disponíveis
    enum class Tipo {
        CONSERVADOR,
        MODERADO,
        AGRESSIVO
    };

    /// Construtor padrão que inicializa com perfil CONSERVADOR
    Perfil();

    /// Construtor que inicializa com um tipo específico de perfil
    Perfil(Tipo tipo);

    /// Retorna o tipo de perfil atual
    Tipo Get();

    /// Define um novo tipo de perfil
    void Set(Tipo tipo);

    /// Retorna uma representação em string do perfil atual
    std::string getTipoString();

private:
    /// Armazena o perfil atual do investidor
    Tipo tipo;
};
#endif // PERFIL_HPP_INCLUDED
