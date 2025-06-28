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
        void setCntrIAA(IAA*);
        void serCntrIAAccount(IAAccount*);
        
};

inline void  CntrControler :: setCntrIAA(IAA *cntr){
    this->cntrAAutenticacao = cntr;
}

inline void  CntrControler :: serCntrIAAccount(IAAccount *cntr){
    this->cntrIAAccount = cntr;
}