#include "perfil_teste.hpp"
#include <iostream>

using namespace std;

void PerfilTeste::setUp() {
    perfil = new Perfil();
    todosTestesPassaram = true;
}

void PerfilTeste::tearDown() {
    delete perfil;
}

void PerfilTeste::testarCenarioSucesso() {
    cout << "Testando cenário de sucesso..." << endl;
    
    try {
        // Teste com perfil CONSERVADOR
        perfil->Set(Perfil::Tipo::CONSERVADOR);
        if (perfil->Get() != Perfil::Tipo::CONSERVADOR) {
            cout << "FALHA: Valor retornado diferente do valor definido para CONSERVADOR" << endl;
            todosTestesPassaram = false;
            return;
        }
        if (perfil->getTipoString() != "Conservador") {
            cout << "FALHA: String retornada incorreta para CONSERVADOR" << endl;
            todosTestesPassaram = false;
            return;
        }
        
        // Teste com perfil MODERADO
        perfil->Set(Perfil::Tipo::MODERADO);
        if (perfil->Get() != Perfil::Tipo::MODERADO) {
            cout << "FALHA: Valor retornado diferente do valor definido para MODERADO" << endl;
            todosTestesPassaram = false;
            return;
        }
        if (perfil->getTipoString() != "Moderado") {
            cout << "FALHA: String retornada incorreta para MODERADO" << endl;
            todosTestesPassaram = false;
            return;
        }
        
        // Teste com perfil AGRESSIVO
        perfil->Set(Perfil::Tipo::AGRESSIVO);
        if (perfil->Get() != Perfil::Tipo::AGRESSIVO) {
            cout << "FALHA: Valor retornado diferente do valor definido para AGRESSIVO" << endl;
            todosTestesPassaram = false;
            return;
        }
        if (perfil->getTipoString() != "Agressivo") {
            cout << "FALHA: String retornada incorreta para AGRESSIVO" << endl;
            todosTestesPassaram = false;
            return;
        }
        
        cout << "SUCESSO: Teste de cenário válido passou" << endl;
    }
    catch (const exception& e) {
        cout << "FALHA: Exceção inesperada lançada: " << e.what() << endl;
        todosTestesPassaram = false;
    }
}

void PerfilTeste::testarCenarioFalha() {
    cout << "Testando cenários de falha..." << endl;
    
    // Não há cenários de falha para testar, pois o enum class
    // garante que apenas valores válidos podem ser atribuídos
    cout << "SUCESSO: Não há cenários de falha para testar" << endl;
}

bool PerfilTeste::run() {
    cout << "Iniciando testes da classe Perfil..." << endl;
    
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    cout << "Testes da classe Perfil finalizados." << endl;
    cout << "Resultado final: " << (todosTestesPassaram ? "SUCESSO" : "FALHA") << endl;
    
    return todosTestesPassaram;
}
