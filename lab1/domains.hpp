#include <cstdint>
#include <string>

using namespace std;

class UsrCode {
    private:
        // constants: ---------------------------------
        static const uint32_t LARGEST_NUM_REPRESENTABLE = 99999;
        static const uint8_t NUMBER_OF_DIGITS = 5;


        // atributes: ---------------------------------
        uint32_t code_number;


        // private methods: ---------------------------
        bool validateCodeStr(const string& num_str);
        string addPaddingToCodeStr(const string& code_str);
    public:
        // init methods
        UsrCode(const string& usr_code_str);
        UsrCode(u_int32_t user_code);

        // gets and sets
        string getStr();
        uint32_t getNum();
        void set(const string& num_str);
        void set(const u_int32_t user_code);

        // comparing
        bool operator==(const UsrCode& other);
        bool operator==(const string& other);
        bool operator==(const int32_t other);
};
