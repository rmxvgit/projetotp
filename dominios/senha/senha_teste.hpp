#include <iostream>
#include "senha.hpp"

using namespace std;
class passwordSmokeTest {
    private:
        string passwordValid = "Val$d3";

        string passwordWithInvalidLength = "#1Error";

        string passwordWithInvalidCharacters = "@2Erro";

        string passwordWithDuplicateCharacters = "&&3Err";

        string passwordWithoutNumbers = "$Error";

        string passwordWithoutUppercase = "5e%rro";

        string passwordWithoutLowercase= "6&ERRO";

        string passwordWithoutSpecialCharacter= "7Error";

        Senha *password;
        int state;

        void setUpPassword();
        void tearDowntPassword();

        void passwordValid();
        void passwordWithInvalidLength();
        void passwordWithInvalidCharacters();
        void passwordWithDuplicateCharacters();
        void passwordWithoutNumbers();
        void passwordWithoutUppercase();
        void passwordWithoutLowercase();
        void passwordWithoutSpecialCharacter();

    
    public:
        const static int sucess = 0;
        const static int failure = -1;

        int run();
};