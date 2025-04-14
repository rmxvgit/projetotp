#include <iostream>
#include "name.hpp"


using namespace std;

int main(){

    Name userName;

    string inputName;
    getline(cin,inputName);

    userName.setValue(inputName);
    cout << userName.getValue() << endl;
    return 0;
}
