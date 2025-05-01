#ifndef CARTEIRA_HPP_INCLUDED
#define CARTEIRA_HPP_INCLUDED
#include "../codigo/codigo.hpp"
#include "../name/name.hpp"
#include "../perfil/perfil.hpp"

class Carteira{
    private:
        Codigo codigo;
        Name name;
        Perfil perfil;

    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo();

        void setName(const Name&);
        Name getName();

        void setPerfil(const Perfil& perfil);
        Perfil getPerfil()const;


};

#endif // CARTEIRA_HPP_INCLUDED
