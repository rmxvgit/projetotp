#include <iostream>
#include "senha.hpp"

using namespace std;
class passwordSmokeTest {
    private:
        const string passwordValid = "Val$d3";

        const string passwordWithInvalidLength = "#1Er";

        const string passwordWithInvalidCharacters = "@2Erro";

        const string passwordWithDuplicateCharacters = "&&3Err";

        const string passwordWithoutNumbers = "$Error";

        const string passwordWithoutUppercase = "5e%rro";

        const string passwordWithoutLowercase= "6&ERRO";

        const string passwordWithoutSpecialCharacter= "7Error";

        Senha *password;
        int state;

        void setUpPassword();
        void tearDowntPassword();

        void testPasswordValid();
        void testPasswordWithInvalidLength();
        void testPasswordWithInvalidCharacters();
        void testPasswordWithDuplicateCharacters();
        void testPasswordWithoutNumbers();
        void testPasswordWithoutUppercase();
        void testPasswordWithoutLowercase();
        void testPasswordWithoutSpecialCharacter();

    
    public:
        const static int sucess = 0;
        const static int failure = -1;

        int run();
};