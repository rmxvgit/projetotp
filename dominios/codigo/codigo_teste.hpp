#include "codigo.hpp"

using namespace std;

class CodigoSmokeTest {
    private:
       const string validCode = "123456789";
       const string invalidLengthCodeMax = "12345678910";
       const string invalidLengthCodeMin= "1234567";
       const string invalidCharacter = "abc";

       Codigo *codeInstacance;
       bool testStatus;

       void setUp();
       void tearDown();

       void testValidCode();
       void testInvalidLengthCodeMax();
       void testInvalidLengthCodeMin();
       void testInvalidCharacter();

    public:
       bool run();
};