#include <iostream>
#include "Entidades/conta.hpp"
#include "Entidades/ordem.hpp"
#include "Entidades/carteira.hpp"



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
    cout  << endl << "Teste da classe ordem" << endl;

    Ordem ordem("111111111", 3, "111111111111", 10.5);
    cout << ordem.getCodigo().Get() << endl;
    cout << ordem.getQuantidade().getQuantidade() << endl;
    cout << ordem.getNegociacao().Get() << endl;
    cout << ordem.getPreco().getDinheiro() << endl;

    // #######################################################

    cout << "DEFINICAO DA CARTEIRA" << endl;
    Perfil perfil;
    Codigo codigo;
    Carteira carteira;

    Perfil::Tipo tipo = Perfil::Tipo::AGRESSIVO;

    perfil.Set(tipo);
    carteira.setPerfil(perfil);

    codigo.Set("123456789");
    carteira.setCodigo(codigo);

    name.Set("carlinhos maia");
    carteira.setName(name);

    cout << "Nome: " << carteira.getName().Get() << endl;
    cout << "Perfil: " << carteira.getPerfil().getTipoString() << endl;
    cout << "Codigo: " << carteira.getCodigo().Get() << endl;



    return 0;
}
