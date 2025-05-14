#include "name.hpp"

using namespace std;

class NameSmokeTest {
    private:
       const string validName = "Eren Jaeger";
       const string invalidLengthName = "Roronoa Zoro no Ichibansenpai";
       const string invalidCharacterName = "Ichig@ Kurosak!";
       const string invalidSpacingName = "Tanjiro  Kamado";

       Name *nameInstance;
       bool testStatus;

       void setUp();
       void tearDown();

       void testValidName();
       void testInvalidLength();
       void testInvalidCharacter();
       void testInvalidSpacing();

    public:

       bool run();
};