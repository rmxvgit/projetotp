#include "../controllers/CntrCC.hpp"


void CntrControler :: execute() {

    bool running = true;
    int option;

    while(running) {
        //Mensagem que será enviada para a tela do menu principal

        cout << "Choose an option:" << endl;
        cout << "1 : Access System" << endl;
        cout << "2 : Login Account" << endl;
        // cout << "3 : Access data about wallet" << endl;
        cout << "4 : Finish execution of the program" << endl;

        cin >> option;

        switch(option){
            case 1: 
                if(cntrAAutenticacao->autenticate(&cpf)){

                    int serviceOption;
                    bool showMenu = true;

                    while (showMenu){
                        
                        //mensagem que será enviada para a tela do usuário
                        cout << "Choose an option:" << endl;
                        cout << "1 : Select account service" << endl;
                        // cout << "2 : Select wallet service" << endl;
                        cout << "3 : Return to main menu" << endl;

                        cin >> serviceOption;

                        switch(serviceOption){
                            case 1:
                                cntrIAAccount->execute(&cpf);
                                break;
                            case 2:
                                cout << "Operations related to order and wallet creation" << endl;
                                break;
                            case 3:
                                showMenu = false;
                                break;
                        }
                    }
                }
                else {
                    cout << "Wrong in authenticate" << endl;
                }
            
                break;
            case 2:
                cntrIAAccount->create();
                break;
            case 3 :
                running = false ;
                break;
        }
    }
    
    return;
}