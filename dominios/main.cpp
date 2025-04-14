#include <iostream>
#include "name.hpp"
#include <string>

using namespace std;

int main(){

    Name userName;

    string inputName;
    getline(cin,inputName);

    cout << userName.setValue(inputName) << endl;
    cout << userName.getValue() << endl;
    return 0;
}
