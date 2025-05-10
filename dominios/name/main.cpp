#include <iostream>
#include <stdexcept>

#include  "name_teste.hpp"
#include  "name.hpp"

using namespace std;

int main(){

    testeDeFumacaNome testandoAsCondicoes;

    switch(testandoAsCondicoes.run()){
        case testeDeFumacaNome ::sucesso : cout << "SUCESSO" << endl;
        break;
        case testeDeFumacaNome::falha: cout << "FALHA" << endl;
        break;
    }
    return 0;
}