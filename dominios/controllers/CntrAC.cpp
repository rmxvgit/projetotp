
#include "../command/CommAccount.hpp"
#include "../controllers/CntrAC.hpp"
#include "../interfaces/ISC.hpp"
#include <iostream>
#include <stdexcept>


void CntrIAAccount :: create(){

    
    Cpf cpf;
    Name name;
    Password password;

    bool result ;
    char field1[80];
    char field2[80];
    char field3[80];

    //Mensagems que seram enviadas para o usuário;
        cout << "Enter your cpf: ";
        cin >> field1;

        cout << "Enter your password : " << endl;
        cin >> field2 ;

        cout << "Enter your name: "<< endl;
        cin >> field3;

        //Criando um novo usuário
        try{
        cpf.Set(string(field1));

        password.Set(string(field2));

        name.Set(string(field3));

        }
        catch (const invalid_argument &exp){
            cout << endl << "data in invalid format" << endl;
            result = false ;
        }

        //Criação de uma nova conta
        Account account;

        account.setCpf(cpf);
        account.setName(name);
        account.setPassword(password);

        //Se tudo funcionar a seguinte mensagem de ser imprimida na tela 
        if(cntrISAccount->create(account)){
            cout << "Sucess in the creating account"<< endl;
            result = true;
            return;
        }

        //Caso algo de errado
        cout << "Wrong in the creating account";
        result = false;
};

void CntrIAAccount :: execute( Cpf& cpf){

    CommAccount* commamd ;

    int option;

    while (true){

        cout << endl << "Chouse a option " << endl <<endl;
        cout << "Create" << CREATE << endl;
        cout << "Read"   << READ << endl ;
        cout << "Update" << UPDATE << endl;
        cout << "Remove" << REMOVE << endl;
        cout << "Return" << RETURN << endl << endl;
        cout << "Selected a option";
        cin >> option;

        switch(option){
            case CREATE:
                commamd = new CommAccountCreate();
                commamd->execute(cntrISAccount);
                delete commamd;
                break;
            case READ:
                commamd = new CommAccountRead();
                commamd->execute(cntrISAccount);
                delete commamd;
                break;
            case UPDATE:
                commamd = new CommAccountUpdate();
                commamd->execute(cntrISAccount);
                delete commamd;
                break;
            case REMOVE:
                commamd = new CommAccountRemove();
                commamd->execute(cntrISAccount);
                delete commamd;
                break;
        }
        if(option == RETURN){
            break;
        }


    }

    return;

}