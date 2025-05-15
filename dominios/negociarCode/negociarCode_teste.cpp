#include "negociarCode_teste.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

void NegociarCodeTeste::setUp() {
    codigo = new codigoNegocio();
    todosTestesPassaram = true;
}

void NegociarCodeTeste::tearDown() {
    delete codigo;
}

void NegociarCodeTeste::testarCenarioSucesso() {
    cout << "Testando cenários de sucesso..." << endl;
    
    // Teste com código alfanumérico
    try {
        codigo->Set(CODIGO_VALIDO);
        string valor = codigo->Get();
        
        if (valor != CODIGO_VALIDO) {
            cout << "FALHA: Valor retornado diferente do valor definido" << endl;
            cout << "Valor esperado: " << CODIGO_VALIDO << endl;
            cout << "Valor obtido: " << valor << endl;
            todosTestesPassaram = false;
            return;
        }
        cout << "SUCESSO: Teste com código alfanumérico passou" << endl;
    }
    catch (const invalid_argument& e) {
        cout << "FALHA: Exceção inesperada lançada: " << e.what() << endl;
        todosTestesPassaram = false;
    }
    
    // Teste com código apenas números
    try {
        codigo->Set(CODIGO_VALIDO_NUMEROS);
        string valor = codigo->Get();
        
        if (valor != CODIGO_VALIDO_NUMEROS) {
            cout << "FALHA: Valor retornado diferente do valor definido" << endl;
            cout << "Valor esperado: " << CODIGO_VALIDO_NUMEROS << endl;
            cout << "Valor obtido: " << valor << endl;
            todosTestesPassaram = false;
            return;
        }
        cout << "SUCESSO: Teste com código apenas números passou" << endl;
    }
    catch (const invalid_argument& e) {
        cout << "FALHA: Exceção inesperada lançada: " << e.what() << endl;
        todosTestesPassaram = false;
    }
    
    // Teste com código apenas letras
    try {
        codigo->Set(CODIGO_VALIDO_LETRAS);
        string valor = codigo->Get();
        
        if (valor != CODIGO_VALIDO_LETRAS) {
            cout << "FALHA: Valor retornado diferente do valor definido" << endl;
            cout << "Valor esperado: " << CODIGO_VALIDO_LETRAS << endl;
            cout << "Valor obtido: " << valor << endl;
            todosTestesPassaram = false;
            return;
        }
        cout << "SUCESSO: Teste com código apenas letras passou" << endl;
    }
    catch (const invalid_argument& e) {
        cout << "FALHA: Exceção inesperada lançada: " << e.what() << endl;
        todosTestesPassaram = false;
    }
}

void NegociarCodeTeste::testarCenarioFalha() {
    cout << "Testando cenários de falha..." << endl;
    
    // Teste com código muito grande
    try {
        codigo->Set(CODIGO_INVALIDO_TAMANHO);
        cout << "FALHA: Exceção não lançada para código muito grande" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para código muito grande" << endl;
    }
    
    // Teste com caractere inválido
    try {
        codigo->Set(CODIGO_INVALIDO_CARACTERE);
        cout << "FALHA: Exceção não lançada para caractere inválido" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para caractere inválido" << endl;
    }
}

bool NegociarCodeTeste::run() {
    cout << "Iniciando testes da classe codigoNegocio..." << endl;
    
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    
    cout << "Testes da classe codigoNegocio finalizados." << endl;
    cout << "Resultado final: " << (todosTestesPassaram ? "SUCESSO" : "FALHA") << endl;
    
    return todosTestesPassaram;
}
