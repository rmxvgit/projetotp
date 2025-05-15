#include "ordem_teste.hpp"
#include <iostream>

using namespace std;

void OrdemTeste::setUp() {
    ordem = new Ordem();
    todosTestesPassaram = true;
}

void OrdemTeste::tearDown() {
    delete ordem;
}

void OrdemTeste::testarCenarioSucesso() {
    cout << "Testando cenário de sucesso..." << endl;

    try {
        // Teste com construtor
        Ordem ordemConstrutor("111111111", 1000, "111111111111", 10.5, "20240315");

        if (ordemConstrutor.getCodigo().Get() != "111111111") {
            cout << "FALHA: Código não foi corretamente atribuído no construtor" << endl;
            todosTestesPassaram = false;
            return;
        }

        if (ordemConstrutor.getQuantidade().Get() != 1000) {
            cout << "FALHA: Quantidade não foi corretamente atribuída no construtor" << endl;
            todosTestesPassaram = false;
            return;
        }

        if (ordemConstrutor.getNegociacao().Get() != "111111111111") {
            cout << "FALHA: Código de negociação não foi corretamente atribuído no construtor" << endl;
            todosTestesPassaram = false;
            return;
        }

        if (ordemConstrutor.getPreco().Get() != 10.5f) {
            cout << "FALHA: Preço não foi corretamente atribuído no construtor" << endl;
            todosTestesPassaram = false;
            return;
        }

        if (ordemConstrutor.getData().Get() != "20240315") {
            cout << "FALHA: Data não foi corretamente atribuída no construtor" << endl;
            todosTestesPassaram = false;
            return;
        }

        // Teste com setters
        ordem->setCodigo("222222222");
        ordem->setQuantidade(2000);
        ordem->setCodigoNegocio("222222222222");
        ordem->setPreco(20.5);
        ordem->SetData("20240316");

        if (ordem->getCodigo().Get() != "222222222") {
            cout << "FALHA: Código não foi corretamente atribuído" << endl;
            todosTestesPassaram = false;
            return;
        }

        if (ordem->getQuantidade().Get() != 2000) {
            cout << "FALHA: Quantidade não foi corretamente atribuída" << endl;
            todosTestesPassaram = false;
            return;
        }

        if (ordem->getNegociacao().Get() != "222222222222") {
            cout << "FALHA: Código de negociação não foi corretamente atribuído" << endl;
            todosTestesPassaram = false;
            return;
        }

        if (ordem->getPreco().Get() != 20.5f) {
            cout << "FALHA: Preço não foi corretamente atribuído" << endl;
            todosTestesPassaram = false;
            return;
        }

        if (ordem->getData().Get() != "20240316") {
            cout << "FALHA: Data não foi corretamente atribuída" << endl;
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

void OrdemTeste::testarCenarioFalha() {
    cout << "Testando cenários de falha..." << endl;

    try {
        // Teste com código inválido
        try {
            ordem->setCodigo("123"); // Código muito curto
            cout << "FALHA: Aceitou código inválido" << endl;
            todosTestesPassaram = false;
        }
        catch (const invalid_argument& e) {
            cout << "SUCESSO: Rejeitou código inválido corretamente" << endl;
        }

        // Teste com quantidade inválida
        try {
            ordem->setQuantidade(0); // Quantidade inválida
            cout << "FALHA: Aceitou quantidade inválida" << endl;
            todosTestesPassaram = false;
        }
        catch (const invalid_argument& e) {
            cout << "SUCESSO: Rejeitou quantidade inválida corretamente" << endl;
        }

        // Teste com preço inválido
        try {
            ordem->setPreco(-10.5); // Preço negativo
            cout << "FALHA: Aceitou preço inválido" << endl;
            todosTestesPassaram = false;
        }
        catch (const invalid_argument& e) {
            cout << "SUCESSO: Rejeitou preço inválido corretamente" << endl;
        }

        // Teste com data inválida
        try {
            ordem->SetData("20240230"); // Data inválida (30 de fevereiro)
            cout << "FALHA: Aceitou data inválida" << endl;
            todosTestesPassaram = false;
        }
        catch (const invalid_argument& e) {
            cout << "SUCESSO: Rejeitou data inválida corretamente" << endl;
        }

        cout << "SUCESSO: Teste de cenários de falha passou" << endl;
    }
    catch (const exception& e) {
        cout << "FALHA: Exceção inesperada lançada: " << e.what() << endl;
        todosTestesPassaram = false;
    }
}

bool OrdemTeste::run() {
    cout << "Iniciando testes da classe Ordem..." << endl;

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    cout << "Testes da classe Ordem finalizados." << endl;
    cout << "Resultado final: " << (todosTestesPassaram ? "SUCESSO" : "FALHA") << endl;

    return todosTestesPassaram;
}
