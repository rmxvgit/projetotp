#include "CntrAC.hpp"
#include "../ command/CommAccount.hpp"
#include <iostream>


void CntrIAAccount :: create(){

    
    Cpf cpf;
    Name name;
    Password password;
    bool result ;
    string drive;

    while (true){

        try {
        cout << "Enter your cpf: ";
        cin >> drive;

        cpf.Set(drive);

        cout << "Enter your password : " << endl;
        cin >> drive ;

        password.Set(drive);

        cout << "Enter your name: "<< endl;
        cin >> drive;

        name.Set(drive);

        break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "data in invalid format" << endl;
            result = false ;
        }
    }
    result = true;



};

void CntrIAAccount :: run(const Cpf& cpf){

    CommAccount commamd;

    int option;

    while (true){

        cout << endl << "Chouse a option " << endl <<endl;
        cout << "Create" << CREATE << endl;
        cout << "Read" << READ << endl ;
        cout << "Update" << UPDATE << endl;
        cout << "Remove" << REMOVE << endl;
        cout << "Return" << RETURN << endl << endl;
        cout << "Selected a option";

        cin >> option;

        switch(option){
            case CREATE : commamd = new CommAccountCreate();
            commamd->run(cntrISAccount);
            delete commamd;
            break;
            case READ : commamd = new CommAccountRead();
            commamd->run(cntrISAccount);
            delete commamd;
            break;
            case UPDATE: commamd = new CommAccountUpdate();
            commamd->run(cntrISAccount);
            delete commamd;
            break;
            case REMOVE : commamd = new CommAccountRemove();
            commamd->run(cntrISAccount);
            delete commamd;
            break;
        }
        if(option == RETURN){
            break;
        }

        return ;

    }

}