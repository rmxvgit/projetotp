#include <iostream>
#include "Entidades/conta.hpp"
#include "Entidades/ordem.hpp"
#include "Entidades/carteira.hpp"
#include "negociarCode/negociarCode.hpp"
#include "cpf/cpf_teste.hpp"
#include "quantidade/quantidade.hpp"



using namespace std;

int main(){
    cout << "CONTA COM INICIALIZAÇÃO PRÉVIA:" << endl;

    Conta conta("batata d", "031.915.716-47", "Aa#123");

    cout << conta.getCpf().Get() << endl;
    cout << conta.getName().Get() << endl;
    cout << conta.getSenha().Get() << endl;

    //########################################################

    cout << endl << "CONTA SEM INICIALIZAÇÃO PRÉVIA:" << endl;

    Conta outraConta;
    outraConta.setCpf("125.453.111-45");
    outraConta.setName("outro nome");
    outraConta.setSenha("Xx#123");

    cout << outraConta.getCpf().Get() << endl;
    cout << outraConta.getName().Get() << endl;
    cout << outraConta.getSenha().Get() << endl;

    //########################################################


    cout << endl << "SETAGEM DE ATRIBUTOS COM OBJETOS:" << endl;

    Cpf cpf("111.111.111-11");
    Name name("nome diff");
    Senha senha("Cc#123");
    Conta contaDiferente;
    contaDiferente.setCpf(cpf);
    contaDiferente.setName(name);
    contaDiferente.setSenha(senha);

    cout << contaDiferente.getCpf().Get() << endl;
    cout << contaDiferente.getName().Get() << endl;
    cout << contaDiferente.getSenha().Get() << endl;


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

    CpfSmokeTest::Run();
    return 0;
}
