#include "stubSA.hpp"

// -------------------------------------------------------------------------------------------
// Defini��es de constantes.

const int StubSA::TRIGGER_FALHA;
const int StubSA::TRIGGER_ERRO_SISTEMA;

// -------------------------------------------------------------------------------------------
// Implementa��o de m�todo.

bool StubSA::autenticar(Cpf &cpf, Password &password) {

    // Apresentar dados recebidos.

    cout << endl << "StubSA::autenticar" << endl ;
    cout << "Cpf = " << cpf.Get() << endl ;
    cout << "Senha     = " << password.Get() << endl ;

    // Diferentes comportamentos dependendo do valor da Cpf.

    switch(cpf.GetNum()){
        case TRIGGER_FALHA:
            return false;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
    }

    return true;
}