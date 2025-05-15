#include "carteira_teste.hpp"
#include <iostream>

using namespace std;

void CarteiraTeste::setUp() {
    carteira = new Carteira();
    todosTestesPassaram = true;
}

void CarteiraTeste::tearDown() {
    delete carteira;
}

void CarteiraTeste::testarCenarioSucesso() {
    cout << "Testando cenário de sucesso..." << endl;
    
    try {
        // Teste com valores válidos
        Codigo codigo;
        Name nome;
        Perfil perfil;
        
        // Configurar valores válidos
        codigo.Set("123456789");
        nome.Set("Carteira Teste");
        perfil.Set(Perfil::Tipo::MODERADO);
        
        // Testar setters e getters
        carteira->setCodigo(codigo);
        carteira->setName(nome);
        carteira->setPerfil(perfil);
        
        // Verificar se os valores foram corretamente atribuídos
        if (carteira->getCodigo().Get() != "123456789") {
            cout << "FALHA: Código não foi corretamente atribuído" << endl;
            todosTestesPassaram = false;
            return;
        }
        
        if (carteira->getName().Get() != "Carteira Teste") {
            cout << "FALHA: Nome não foi corretamente atribuído" << endl;
            todosTestesPassaram = false;
            return;
        }
        
        if (carteira->getPerfil().Get() != Perfil::Tipo::MODERADO) {
            cout << "FALHA: Perfil não foi corretamente atribuído" << endl;
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

void CarteiraTeste::testarCenarioFalha() {
    cout << "Testando cenários de falha..." << endl;
    
    try {
        // Teste com código inválido
        Codigo codigoInvalido;
        try {
            codigoInvalido.Set("123"); // Código muito curto
            carteira->setCodigo(codigoInvalido);
            cout << "FALHA: Aceitou código inválido" << endl;
            todosTestesPassaram = false;
        }
        catch (const invalid_argument& e) {
            cout << "SUCESSO: Rejeitou código inválido corretamente" << endl;
        }
        
        // Teste com nome inválido
        Name nomeInvalido;
        try {
            nomeInvalido.Set(""); // Nome vazio
            carteira->setName(nomeInvalido);
            cout << "FALHA: Aceitou nome inválido" << endl;
            todosTestesPassaram = false;
        }
        catch (const invalid_argument& e) {
            cout << "SUCESSO: Rejeitou nome inválido corretamente" << endl;
        }
        
        cout << "SUCESSO: Teste de cenários de falha passou" << endl;
    }
    catch (const exception& e) {
        cout << "FALHA: Exceção inesperada lançada: " << e.what() << endl;
        todosTestesPassaram = false;
    }
}

bool CarteiraTeste::run() {
    cout << "Iniciando testes da classe Carteira..." << endl;
    
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    cout << "Testes da classe Carteira finalizados." << endl;
    cout << "Resultado final: " << (todosTestesPassaram ? "SUCESSO" : "FALHA") << endl;
    
    return todosTestesPassaram;
}
