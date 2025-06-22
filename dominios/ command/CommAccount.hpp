
#include <iostream>
#include "../ controllers/CntrAC.hpp"   

class CommAccount {
    public :
        virtual void run(ISAccount *);
        virtual ~CommAccount(){};
};

class CommAccountCreate : public CommAccount {
    public :
        void run(ISAccount *);
};

class CommAccountRead : public CommAccount {
    public :
        void run(ISAccount *);
};

class CommAccountUpdate : public CommAccount {
    public :
        void run(ISAccount *);
};

class CommAccountRemove : public CommAccount {
    public :
        void run(ISAccount *);
};

