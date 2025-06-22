#include "CommAccount.hpp"
#include <iostream>

void CommAccountCreate ::run(ISAccount *cntrIAAccount){

    bool result;
    Account account;

    while (true){
        try {

            string value;
            Cpf cpf;
            Name name;
            Password password;

        cout << "Enter the Cpf" ;
        cin >> value;
        cpf.Set(value);
        account.setCpf(value);

        cout << "Enter the Name" ;
        cin >> value;
        name.Set(value);
        account.setName(value);

        cout << "Enter the password" ;
        cin >> value;
        password.Set(value);
        account.setPassword(value);
        
        break;
        }

        catch(invalid_argument &exp){
            cout << "Datas in shape invalid" << endl;
        }
    }

     result = cntrIAAccount->create(account);

     if(result) {

        cout << "Succes in the operation create" << endl;
     }else {
        cout << "Wrong in the operation create" << endl;
     }

} 

void CommAccountRead ::run(ISAccount *cntrIAAccount){

    bool result;
    Account account;

    while (true){
        try {

            string value;
            Cpf cpf;

        cout << "Enter the Cpf" ;
        cin >> value;
        
        // cpf.Set(value);
        // account.setCpf(value);
        break;
        }

        catch(invalid_argument &exp){
            cout << "Cpf in shape invalid" << endl;
        }
    }

     result = cntrIAAccount->read(account);

     if(result) {

        cout << "Succes in the Operation Read" << endl;
     }else {
        cout << "Wrong in the Operation Read" << endl;
     }

} 





void CommAccountUpdate ::run(ISAccount *cntrIAAccount){

    bool result;
    Account account;

    while (true){
        try {

            string value;
            Cpf cpf;

        cout << "Enter the Cpf" ;
        cin >> value;
        
        cpf.Set(value);
        account.setCpf(value);
        break;
        }

        catch(invalid_argument &exp){
            cout << "Cpf in shape invalid" << endl;
        }
    }

     result = cntrIAAccount->update(account);

     if(result) {

        cout << "Succes in the Operation Read" << endl;
     }else {
        cout << "Wrong in the Operation Read" << endl;
     }

} 

void CommAccountRemove::run(ISAccount *cntrIAAccount){

    bool result;
    Cpf cpf;

    while (true){
        try {

            string value;
            Cpf cpf;

        cout << "Enter the Cpf" ;
        cin >> value;
        cpf.Set(value);
        break;
        }

        catch(invalid_argument &exp){
            cout << "Cpf in shape invalid" << endl;
        }
    }

     result = cntrIAAccount->remove(cpf);

     if(result) {

        cout << "Succes in the operation remove" << endl;
     }else {
        cout << "Wrong in the operation remove" << endl;
     }

} 
