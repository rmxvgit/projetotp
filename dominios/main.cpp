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

using namespace std;

int main(){
    cout << "CONTA COM INICIALIZAÇÃO PRÉVIA:" << endl;

    Account conta("batata d", "031.915.716-47", "Aa#123");

    cout << conta.getCpf().Get() << endl;
    cout << conta.getName().Get() << endl;
    cout << conta.getPassword().Get() << endl;

    //########################################################

    cout << endl << "CONTA SEM INICIALIZAÇÃO PRÉVIA:" << endl;

    Account outraConta;
    outraConta.setCpf("125.453.111-45");
    outraConta.setName("outro nome");
    outraConta.setPassword("Xx#123");

    cout << outraConta.getCpf().Get() << endl;
    cout << outraConta.getName().Get() << endl;
    cout << outraConta.getPassword().Get() << endl;

    //########################################################


    cout << endl << "SETAGEM DE ATRIBUTOS COM OBJETOS:" << endl;

    Cpf cpf("111.111.111-11");
    Name name("nome diff");
    Password senha("Cc#123");
    Account contaDiferente;
    contaDiferente.setCpf(cpf);
    contaDiferente.setName(name);
    contaDiferente.setPassword(senha);

    cout << contaDiferente.getCpf().Get() << endl;
    cout << contaDiferente.getName().Get() << endl;
    cout << contaDiferente.getPassword().Get() << endl;


    // #######################################################
    cout  << endl << "TESTE DA ORDEM COM CONSTRUTUOR" << endl;

    Ordem ordem("111111111", 3, "111111111111", 10.5, "20051212");
    cout << ordem.getCodigo().Get() << endl;
    cout << ordem.getQuantidade().Get() << endl;
    cout << ordem.getNegociacao().Get() << endl;
    cout << ordem.getPreco().Get() << endl;
    cout << ordem.getData().Get() << endl;

    // #######################################################

    cout  << endl << "TESTE DA ORDEM SEM CONSTRUTUOR:" << endl;
    Ordem ordem2;

    ordem2.setCodigoNegocio("111111111111");
    ordem2.setQuantidade(3);
    ordem2.setCodigo("111111111");
    ordem2.setPreco(15.2);
    ordem2.SetData("20150704");

    cout << ordem.getCodigo().Get() << endl;
    cout << ordem.getQuantidade().Get() << endl;
    cout << ordem.getNegociacao().Get() << endl;
    cout << ordem.getPreco().Get() << endl;
    cout << ordem.getData().Get() << endl;


    // #######################################################

    cout << endl << "DEFINICAO DA CARTEIRA:" << endl;
    Carteira carteira;
    Perfil perfil;
    Codigo codigo;
    Name nomeCarteira;

    perfil.Set(Perfil::Tipo::AGRESSIVO);
    carteira.setPerfil(perfil);

    codigo.Set("123456789");
    carteira.setCodigo(codigo);

    nomeCarteira.Set("carlinhos maia");
    carteira.setName(nomeCarteira);

    cout << "Nome: " << carteira.getName().Get() << endl;
    cout << "Perfil: " << carteira.getPerfil().getTipoString() << endl;
    cout << "Codigo: " << carteira.getCodigo().Get() << endl;

    //########################################################



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

    return 0;
}
