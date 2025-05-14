#include "account.hpp"
#include "../name/name.hpp"
#include "../password/password.hpp"
#include <iostream>

using namespace std;

class AccountSmokeTest {
    private :
        const string nameValid = "Forrest Gump";
        const string pwdValid = "5$Vali";
        const string cpfValid = "123.456.789-10";

        Account*accountInstance;
        int testState;

        void setUp();
        void tearDown();
        void testScenario();

        public:

        bool run();
};