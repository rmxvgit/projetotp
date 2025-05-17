#include <iostream>
#include "Entidades/account.hpp"
#include "Entidades/ordem.hpp"
#include "Entidades/carteira.hpp"
#include "dinheiro/dinheiro.hpp"
#include "negociarCode/negociarCode.hpp"
#include "cpf/cpf_teste.hpp"
#include "name/name_test.hpp"
#include "password/password_test.hpp"
#include "quantidade/quantidade.hpp"
#include "Entidades/account_test.hpp"
#include "data/data_teste.hpp"
#include "dinheiro/dinheiro_teste.hpp"
#include "negociarCode/negociarCode_teste.hpp"
#include "quantidade/quantidade_teste.hpp"
#include "perfil/perfil_teste.hpp"
#include "Entidades/carteira_teste.hpp"
#include "Entidades/ordem_teste.hpp"
<<<<<<< HEAD
#include "usrCode/usrCode_teste.hpp"
=======
#include "codigo/codigo_teste.hpp"
>>>>>>> 2b1a501d3eb815bd43b964c916580fc5831c8fe4

using namespace std;

int main(){

     NameSmokeTest testName;
     PasswordSmokeTest testPassword;
     AccountSmokeTest testAccount;
     NegociarCodeTeste testNegociarCode;
     QuantidadeTeste testQuantidade;
     PerfilTeste testPerfil;
     CarteiraTeste testCarteira;
     OrdemTeste testOrdem;
     DinheiroSmokeTest testDinheiro;
     DataSmokeTest testData;
     UsrCodeTeste testUsrCode;
     CodigoSmokeTest testCode;



    if(testName.run())      cout << "Success in the name domain test" << endl;
    if(testPassword.run())  cout << "Success in the password domain test" << endl;
    if(testAccount.run())   cout << "Success in the account entity test" << endl;
    if(CpfSmokeTest::Run())       cout << "Success in the CPF domain test" << endl;
    if(testData.run())      cout << "Success in the Data domain test" << endl;
    if(testNegociarCode.run())    cout << "Success in the NegociarCode domain test" << endl;
    if(testQuantidade.run())      cout << "Success in the Quantidade domain test" << endl;
    if(testPerfil.run())          cout << "Success in the Perfil domain test" << endl;
    if(testCarteira.run())        cout << "Success in the Carteira entity test" << endl;
    if(testOrdem.run())           cout << "Success in the Ordem entity" << endl;
    if(testDinheiro.run()) cout << "Success in the Ordem entity" << endl;
    if(testUsrCode.run()) cout << "Succes in the UsrCode entity" << endl;
    if(testCode.run())  cout << "Success in the code domain test" << endl;

    return 0;
}
