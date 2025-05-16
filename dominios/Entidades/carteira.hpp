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
        /// Get() retorna o valor armazenado.
        /// Set() valida e atribui um novo valor, lançando exceção se inválido.
         
        void setCodigo(const Codigo&);
        Codigo getCodigo();

        void setName(const Name&);
        Name getName();
        
        void setPerfil(const Perfil& perfil);
        Perfil getPerfil()const;


};

#endif // CARTEIRA_HPP_INCLUDED
