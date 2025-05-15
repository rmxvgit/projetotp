#include "dinheiro_teste.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

void DinheiroTeste::setUp() {
    dinheiro = new Dinheiro();
    todosTestesPassaram = true;
}

void DinheiroTeste::tearDown() {
    delete dinheiro;
}

void DinheiroTeste::testarCenarioSucesso() {
    cout << "Testando cenário de sucesso..." << endl;
    
    try {
        dinheiro->Set(VALOR_VALIDO);
        float valor = dinheiro->Get();
        
        if (valor != VALOR_VALIDO) {
            cout << "FALHA: Valor retornado diferente do valor definido" << endl;
            cout << "Valor esperado: " << VALOR_VALIDO << endl;
            cout << "Valor obtido: " << valor << endl;
            todosTestesPassaram = false;
            return;
        }
        
        cout << "SUCESSO: Teste de cenário válido passou" << endl;
    }
    catch (const invalid_argument& e) {
        cout << "FALHA: Exceção inesperada lançada: " << e.what() << endl;
        todosTestesPassaram = false;
    }
}

void DinheiroTeste::testarCenarioFalha() {
    cout << "Testando cenários de falha..." << endl;
    
    // Teste com valor negativo
    try {
        dinheiro->Set(VALOR_INVALIDO_NEGATIVO);
        cout << "FALHA: Exceção não lançada para valor negativo" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para valor negativo" << endl;
    }
    
    // Teste com valor acima do limite
    try {
        dinheiro->Set(VALOR_INVALIDO_ACIMA_LIMITE);
        cout << "FALHA: Exceção não lançada para valor acima do limite" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para valor acima do limite" << endl;
    }
    
    // Teste com valor zero
    try {
        dinheiro->Set(VALOR_INVALIDO_ZERO);
        cout << "FALHA: Exceção não lançada para valor zero" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para valor zero" << endl;
    }
}

bool DinheiroTeste::run() {
    cout << "Iniciando testes da classe Dinheiro..." << endl;
    
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    cout << "Testes da classe Dinheiro finalizados." << endl;
    cout << "Resultado final: " << (todosTestesPassaram ? "SUCESSO" : "FALHA") << endl;
    
    return todosTestesPassaram;
}
