#include "../controllers/CntrAA.hpp"
#include "../password/password.hpp"
#include <string>

// ---------------------------------------------------------------------------------
// Implementa��es de m�todos de classe controladora.

bool CntrAAutenticacao::autenticate(Cpf *cpf) {
    int entrada;
    Password password;
    string pwd; 

    // Solicitar matricula e senha.

    while(true) {

        cout << endl << "Autenticacao de usuario." << endl << endl;

        try {
            cout << "Digite o Cpf : ";
            cin >> entrada;
            cpf->Set(entrada);
            cout << "Digite a senha     : ";
            cin >> pwd;
            password.Set(pwd );
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
        }
    }

    // Solicitar autentica��o.

    bool resultado = cntrISAutenticacao->autenticate(*cpf, password);

    // Retornar resultado da autentica��o.

    return resultado;
}
