/*------------------------------------------------------------------------------------
                O nome digitado pelo usuario deve respeitar as regras a seguir
-->Texto com até 20 caracteres.
-->Cada caracter pode ser dígito (0 – 9), letra (A – Z ou a – z) ou espaço em branco.
-->Não podem existir espaços em branco em sequência.
----------------------------------------------------------------------------------------*/

#pragma once
#include <string>

using namespace std;

class Name{
    private :
        // constants: ---------------------------------
        static const int MAXIMUM_LENGTH = 20;

        // atributes: ---------------------------------
        string name;


        // private methods: ---------------------------
        bool amountOfWhitespace(const string &);
        bool defaultOfTheCharecter(const string &);
        bool validator(const string &);

    public:

        // constructors --------------------------------
        Name();
        Name(const string &);

        // gets and sets -------------------------------
        string Get();
        bool Set(const string &);
};

inline string Name::Get(){
    return name;
}
