#ifndef PERFIL_HPP_INCLUDED
#define PERFIL_HPP_INCLUDED

#include <string>

class Perfil {
public:
    enum class Tipo {
        CONSERVADOR,
        MODERADO,
        AGRESSIVO
    };

    Perfil();
    Perfil(Tipo tipo);

    Tipo Get();
    void Set(Tipo tipo);

    std::string getTipoString();

private:
    Tipo tipo;
};
#endif // PERFIL_HPP_INCLUDED
