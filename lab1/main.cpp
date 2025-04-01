#include <iostream>
#include "domains.hpp"

using namespace std;

int main()
{
    UsrCode user_code1 = UsrCode(124);
    UsrCode user_code2 = UsrCode("124");
    UsrCode user_code3 = UsrCode(333);

    cout << "numeric representation: " << user_code1.getNum() << endl;
    cout << "string representation: " << user_code1.getStr() << endl;
    cout << "equality test (UsrCode(124) == UsrCode(\"124\")): " << (user_code1 == user_code2) << endl;
    cout << "equality test (UsrCode(124) == UsrCode(333)): " << (user_code1 == user_code3) << endl;

    return 0;
}
