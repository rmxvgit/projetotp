/*------------------------------------------------------------------------------------
                O nome digitado pelo usuario deve respeitar as regras a seguir
-->Texto com até 20 caracteres.
-->Cada caracter pode ser dígito (0 – 9), letra (A – Z ou a – z) ou espaço em branco.
-->Não podem existir espaços em branco em sequência.
----------------------------------------------------------------------------------------*/



#include <iostream>


using namespace std;

class Name{
    private :

    // constants: ---------------------------------
    static const int maximumLength = 20;

    // atributes: ---------------------------------
    string name;

    // private methods: ---------------------------
    bool amountOfWhitespace(const string &);
    bool defaultOfTheCharecter(const string &);
    
    public:
    // analyzing parameters
    bool validator(const string &);

    // gets and sets
    string getValue();
    bool setValue(const string &);

};

inline string Name :: getValue(){

    return name;
}


