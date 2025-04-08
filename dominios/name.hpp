#include <iostream>


using namespace std;

class Name{
    private :

    /*Definindo the wheigt max of the vector Name*/ 
    static const int LIMITE = 20;
    string  token;

    public:
    bool validator_01(const string &);
    string getValue();
    bool setValue(const string &);
};

inline string Name :: getValue(){

    return token;
}


