#ifndef __BLACKMALEHUMAN_H__
#define __BLACKMALEHUMAN_H__

#include "BlackHuman.h"

#include <iostream>

using namespace std;

class CBlackMaleHuman :public CBlackHuman
{
public:
    CBlackMaleHuman(void){}
    ~CBlackMaleHuman(void){}

    void Sex()
    {
        cout << "该黑种人的性别为男..." << endl;
    }
};

#endif

