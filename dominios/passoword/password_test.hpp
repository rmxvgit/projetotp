#include "password.hpp"

using namespace std;
class PasswordSmokeTest {
    private:

        //PASSWORD = PWD
        const string validPwd = "Val$d3";
        const string invalidLengthPwd = "#1Er";
        const string invalidCharPwd = "@2Erro";
        const string duplicateCharPwd = "&&3Err";
        const string noNumberPwd = "$Error";
        const string noUpperCasePwd = "5e%rro";
        const string noLowerCasePwd = "6&ERRO";
        const string noSpecialCharPwd = "7Error";

        Password *pwd;
        int testState;

        void setUp();
        void tearDown();

        void testValidPwd();
        void testLengthInvalidPwd();
        void testInvalidCharPwd();
        void testDuplicateCharPwd();
        void testNoNumberPwd();
        void testNoUpperCasePwd();
        void testNoLowerCasePwd();
        void testNoSpecialCharPwd();

    public:
        bool run();
};
