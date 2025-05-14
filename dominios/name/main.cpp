#include <iostream>
#include  "name_test.hpp"

using namespace std;

int main(){

    NameSmokeTest testandoAsCondicoes;

    switch(testandoAsCondicoes.run()){
        case true :
            cout << "Teste do dominio nome realizado com sucesso" << endl;
            break;
        case false: 
            break;
    };
    return 0;
}
