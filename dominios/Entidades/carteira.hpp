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
        /// Set() valida e atribui um novo valor, lançando exceção se inválido.
        void setCodigo(const Codigo&);
        
        /// Get() retorna o valor armazenado.
        Codigo getCodigo();
        
        /// Set() valida e atribui um novo valor, lançando exceção se inválido.
        void setName(const Name&);

        /// Get() retorna o valor armazenado.
        Name getName();
        
        /// Set() valida e atribui um novo valor, lançando exceção se inválido.
        void setPerfil(const Perfil& perfil);

        /// Get() retorna o valor armazenado.
        Perfil getPerfil()const;


};

#endif // CARTEIRA_HPP_INCLUDED
