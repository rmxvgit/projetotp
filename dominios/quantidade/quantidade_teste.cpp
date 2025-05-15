#include "quantidade_teste.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

void QuantidadeTeste::setUp() {
    quantidade = new Quantidade();
    todosTestesPassaram = true;
}

void QuantidadeTeste::tearDown() {
    delete quantidade;
}

void QuantidadeTeste::testarCenarioSucesso() {
    cout << "Testando cenário de sucesso..." << endl;
    
    try {
        quantidade->Set(QUANTIDADE_VALIDA);
        int valor = quantidade->Get();
        
        if (valor != QUANTIDADE_VALIDA) {
            cout << "FALHA: Valor retornado diferente do valor definido" << endl;
            cout << "Valor esperado: " << QUANTIDADE_VALIDA << endl;
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

void QuantidadeTeste::testarCenarioFalha() {
    cout << "Testando cenários de falha..." << endl;
    
    // Teste com quantidade negativa
    try {
        quantidade->Set(QUANTIDADE_INVALIDA_NEGATIVA);
        cout << "FALHA: Exceção não lançada para quantidade negativa" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para quantidade negativa" << endl;
    }
    
    // Teste com quantidade zero
    try {
        quantidade->Set(QUANTIDADE_INVALIDA_ZERO);
        cout << "FALHA: Exceção não lançada para quantidade zero" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para quantidade zero" << endl;
    }
    
    // Teste com quantidade acima do limite
    try {
        quantidade->Set(QUANTIDADE_INVALIDA_ACIMA_LIMITE);
        cout << "FALHA: Exceção não lançada para quantidade acima do limite" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para quantidade acima do limite" << endl;
    }
}

bool QuantidadeTeste::run() {
    cout << "Iniciando testes da classe Quantidade..." << endl;
    
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    cout << "Testes da classe Quantidade finalizados." << endl;
    cout << "Resultado final: " << (todosTestesPassaram ? "SUCESSO" : "FALHA") << endl;
    
    return todosTestesPassaram;
}
