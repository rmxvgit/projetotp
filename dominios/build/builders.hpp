#include "../interfaces/IAA.hpp"
#include "../interfaces/ISA.hpp"
#include "../interfaces/IAC.hpp"
#include "../interfaces/ISC.hpp"
#include "../controllers/CntrAA.hpp"
#include "../controllers/CntrAC.hpp"
#include "../controllers/CntrAI.hpp"
#include "../controllers/CntrCC.hpp"
#include "../command/CommAccount.hpp"

class SystemBuilder {
    private:
        CntrControler *cntrControler;
        IAA *cntrAAutenticacao;
        IAAccount *cntrIAAccount;

        ISA *cntrISAutenticacao;
        ISAccount *cntrISAccount;
    public:
        CntrControler *create();
        ~SystemBuilder();
};