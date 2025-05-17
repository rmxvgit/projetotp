#include "usrCode_teste.hpp"
#include <iostream>

using namespace std;

void UsrCodeTeste::setUp() {
    usrCode = new UsrCode("00000"); // Valor inicial padrão
    todosTestesPassaram = true;
}

void UsrCodeTeste::tearDown() {
    delete usrCode;
}

void UsrCodeTeste::testarCenarioSucesso() {
    cout << "Testando cenário de sucesso..." << endl;

    // Teste com string válida
    try {
        usrCode->set(CODIGO_VALIDO_STR);
        string valorStr = usrCode->getStr();

        if (valorStr != CODIGO_VALIDO_STR) {
            cout << "FALHA: Valor string retornado diferente do valor definido" << endl;
            cout << "Valor esperado: " << CODIGO_VALIDO_STR << endl;
            cout << "Valor obtido: " << valorStr << endl;
            todosTestesPassaram = false;
        } else {
            cout << "SUCESSO: Teste de string válida passou" << endl;
        }
    }
    catch (const invalid_argument& e) {
        cout << "FALHA: Exceção inesperada lançada: " << e.what() << endl;
        todosTestesPassaram = false;
    }

    // Teste com string válida com zeros à esquerda
    try {
        usrCode->set(CODIGO_VALIDO_STR_COM_ZEROS);
        string valorStr = usrCode->getStr();

        if (valorStr != CODIGO_VALIDO_STR_COM_ZEROS) {
            cout << "FALHA: Valor string com zeros retornado diferente" << endl;
            cout << "Valor esperado: " << CODIGO_VALIDO_STR_COM_ZEROS << endl;
            cout << "Valor obtido: " << valorStr << endl;
            todosTestesPassaram = false;
        } else {
            cout << "SUCESSO: Teste de string com zeros válida passou" << endl;
        }
    }
    catch (const invalid_argument& e) {
        cout << "FALHA: Exceção inesperada lançada: " << e.what() << endl;
        todosTestesPassaram = false;
    }

    // Teste com número válido
    try {
        usrCode->set(CODIGO_VALIDO_NUM);
        uint32_t valorNum = usrCode->getNum();

        if (valorNum != CODIGO_VALIDO_NUM) {
            cout << "FALHA: Valor numérico retornado diferente do valor definido" << endl;
            cout << "Valor esperado: " << CODIGO_VALIDO_NUM << endl;
            cout << "Valor obtido: " << valorNum << endl;
            todosTestesPassaram = false;
        } else {
            cout << "SUCESSO: Teste de número válido passou" << endl;
        }
    }
    catch (const invalid_argument& e) {
        cout << "FALHA: Exceção inesperada lançada: " << e.what() << endl;
        todosTestesPassaram = false;
    }
}

void UsrCodeTeste::testarCenarioFalha() {
    cout << "Testando cenários de falha..." << endl;

    // Teste com string longa demais
    try {
        usrCode->set(CODIGO_INVALIDO_STR_LONGO);
        cout << "FALHA: Exceção não lançada para string longa demais" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para string longa demais" << endl;
    }

    // Teste com string com caracteres inválidos
    try {
        usrCode->set(CODIGO_INVALIDO_STR_CARACTERES);
        cout << "FALHA: Exceção não lançada para string com caracteres inválidos" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para string com caracteres inválidos" << endl;
    }

    // Teste com número grande demais
    try {
        usrCode->set(CODIGO_INVALIDO_NUM_GRANDE);
        cout << "FALHA: Exceção não lançada para número grande demais" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para número grande demais" << endl;
    }

    // Teste com número negativo
    try {
        usrCode->set(CODIGO_INVALIDO_NUM_NEGATIVO);
        cout << "FALHA: Exceção não lançada para número negativo" << endl;
        todosTestesPassaram = false;
    }
    catch (const invalid_argument& e) {
        cout << "SUCESSO: Exceção lançada corretamente para número negativo" << endl;
    }
}

void UsrCodeTeste::testarOperadores() {
    cout << "Testando operadores de comparação..." << endl;

    try {
        UsrCode code1("12345");
        UsrCode code2(12345);
        UsrCode code3("54321");

        // Teste operator== entre UsrCode
        if (!(code1 == code2)) {
            cout << "FALHA: Operador == entre UsrCode falhou para valores iguais" << endl;
            todosTestesPassaram = false;
        } else if (code1 == code3) {
            cout << "FALHA: Operador == entre UsrCode falhou para valores diferentes" << endl;
            todosTestesPassaram = false;
        } else {
            cout << "SUCESSO: Operador == entre UsrCode passou" << endl;
        }

        // Teste operator== com string
        if (!(code1 == "12345")) {
            cout << "FALHA: Operador == com string falhou para valor igual" << endl;
            todosTestesPassaram = false;
        } else if (code1 == "54321") {
            cout << "FALHA: Operador == com string falhou para valor diferente" << endl;
            todosTestesPassaram = false;
        } else {
            cout << "SUCESSO: Operador == com string passou" << endl;
        }

        // Teste operator== com int
        if (!(code1 == 12345)) {
            cout << "FALHA: Operador == com int falhou para valor igual" << endl;
            todosTestesPassaram = false;
        } else if (code1 == 54321) {
            cout << "FALHA: Operador == com int falhou para valor diferente" << endl;
            todosTestesPassaram = false;
        } else {
            cout << "SUCESSO: Operador == com int passou" << endl;
        }
    }
    catch (const invalid_argument& e) {
        cout << "FALHA: Exceção inesperada lançada durante teste de operadores: " << e.what() << endl;
        todosTestesPassaram = false;
    }
}

bool UsrCodeTeste::run() {
    cout << "Iniciando testes da classe UsrCode..." << endl;

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    testarOperadores();
    tearDown();

    cout << "Testes da classe UsrCode finalizados." << endl;
    cout << "Resultado final: " << (todosTestesPassaram ? "SUCESSO" : "FALHA") << endl;

    return todosTestesPassaram;
}
