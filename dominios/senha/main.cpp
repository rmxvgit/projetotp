#include <iostream>
#include <stdexcept>

#include "senha.hpp"
#include "senha_teste.hpp"

using namespace std;

int main(){

    passwordSmokeTest testPassoword;

    switch(testPassoword.run())
    {
        case passwordSmokeTest::sucess : cout <<"SUCESSO"<< endl;
        break;
        case passwordSmokeTest::failure : cout <<"FALHA"<<endl;
        break;
    }

    return 0;
}