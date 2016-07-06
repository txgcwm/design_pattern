#ifndef __WHITEHUMAN_H__
#define __WHITEHUMAN_H__

#include "IHuman.h"

#include <iostream>

using namespace std;

class CWhiteHuman : public IHuman
{
public:
    CWhiteHuman(void){}
    ~CWhiteHuman(void){}

    void Laugh()
    {
        cout << "白色人种会大笑，侵略的笑声" << endl;
    }

    void Cry()
    {
        cout << "白色人种会哭" << endl;
    }

    void Talk()
    {
        cout << "白色人种会说话，一般都是单字节" << endl;
    }
    
    virtual void Sex() = 0;
};

#endif

