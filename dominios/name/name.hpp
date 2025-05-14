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
        static const int MAXIMUM_LENGTH = 20;

        string name;

        bool hasConsecutiveSpaces(const string &);
        bool hasInvalidCharacters(const string &);
        bool validator(const string &);

    public:

        Name();
        Name(const string &);

        string Get();
        void Set(const string &);
};

inline string Name::Get(){
    return name;
}
