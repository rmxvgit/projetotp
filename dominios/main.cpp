#include <iostream>
#include "Entidades/conta.hpp"

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

    return 0;
}
