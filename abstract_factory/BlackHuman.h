#ifndef __BLACKHUMAN_H__
#define __BLACKHUMAN_H__

#include "IHuman.h"

#include <iostream>

using namespace std;

class CBlackHuman : public IHuman
{
public:
    CBlackHuman(void){}
    ~CBlackHuman(void){}

    void Laugh()
    {
        cout << "黑人会笑" << endl;
    }

    void Cry()
    {
        cout << "黑人会哭" << endl;
    }

    void Talk()
    {
        cout << "黑人可以说话，一般人听不懂" << endl;
    }

    virtual void Sex() = 0;
};

#endif

