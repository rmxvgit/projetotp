#include <iostream>
#include <stdexcept>

#include "password_test.hpp"

using namespace std;

int main(){

    PasswordSmokeTest testPassoword;

    switch(testPassoword.run())
    {
        case true: cout <<"SUCESSO"<< endl;
        break;
        case false : cout <<"FALHA"<<endl;
        break;
    }

    return 0;
}