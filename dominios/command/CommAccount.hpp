#pragma once
#include <iostream>
#include "../controllers/CntrAC.hpp"   

class CommAccount {
    public :
        virtual void execute(ISAccount *);
        virtual ~CommAccount(){};
};

class CommAccountCreate : public CommAccount {
    public :
        void execute(ISAccount *);
};

class CommAccountRead : public CommAccount {
    public :
        void execute(ISAccount *);
};

class CommAccountUpdate : public CommAccount {
    public :
        void execute(ISAccount *);
};

class CommAccountRemove : public CommAccount {
    public :
        void execute(ISAccount *);
};

