#include "../controllers/CntrAA.hpp"
#include "../controllers/CntrAC.hpp"
#include "../controllers/CntrAI.hpp"
#include "../interfaces/IAA.hpp"
#include "../interfaces/IAC.hpp"
#include "../interfaces/ISA.hpp"
#include "../interfaces/ISC.hpp"

class CntrControler {
    private :
     Cpf cpf;
     IAA *cntrAAutenticacao;
     IAAccount *cntrIAAccount;
    public :
        void execute();
        void setCntrIAAutenticacao(IAA*);
        void setCntrIAAccount(IAAccount*);
        
};

inline void  CntrControler :: setCntrIAAutenticacao(IAA *cntr){
    this->cntrAAutenticacao = cntr;
}

inline void  CntrControler :: serCntrIAAccount(IAAccount *cntr){
    this->cntrIAAccount = cntr;
}