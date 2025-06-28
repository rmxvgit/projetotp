#include "../build/builders.hpp"

CntrControler *SystemBuilder::create(){
    
    cntrControler = new CntrControler();
    cntrAAutenticacao = new CntrAAutenticacao();
    cntrIAAccount = new CntrIAAccount();

    cntrISAutenticacao = new StubSA();
    cntrISAccount = new StubISAccount();

    cntrControler->setCntrIAAutenticacao(cntrAAutenticacao);
    cntrControler->setCntrIAAccount(cntrIAAccount);

    cntrAAutenticacao->setController(cntrISAutenticacao);
    cntrIAAccount->setCntrAccount(cntrISAccount);

    return cntrControler;
}

SystemBuilder :: ~SystemBuilder(){
    delete cntrControler;
    delete cntrAAutenticacao;
    delete cntrIAAccount;
    delete cntrISAutenticacao;
    delete cntrISAccount;
}
