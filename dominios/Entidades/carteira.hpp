#ifndef CARTEIRA_HPP_INCLUDED
#define CARTEIRA_HPP_INCLUDED
#include "../codigo/codigo.hpp"
#include "../name/name.hpp"
#include "../perfil/perfil.hpp"
/// Carteira é uma entidade com o propósito de reunir os dados do cliente. 


class Carteira{
    private:
        Codigo codigo;
        Name name;
        Perfil perfil;

    public:
        /// @brief 
        /// @param  
        void setCodigo(const Codigo&);
        Codigo getCodigo();

        void setName(const Name&);
        Name getName();
        // O set chama uma função validar, que avalia se lança excessão 
        void setPerfil(const Perfil& perfil);
        Perfil getPerfil()const;


};

#endif // CARTEIRA_HPP_INCLUDED
