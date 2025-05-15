#include "data.hpp"
#include <string>
using namespace std;

class DataSmokeTest {
    private:
        static const string valid_date;
        static const string invalid_date;

        bool state;
        Data date;


        void setup();
        void erase();
        void test1();
        void test2();

    public:
        static bool Run();
};
