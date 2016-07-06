#ifndef __BLACKFEMALEHUMAN_H__
#define __BLACKFEMALEHUMAN_H__

#include "BlackHuman.h"

#include <iostream>

using namespace std;

class CBlackFemaleHuman : public CBlackHuman
{
public:
    CBlackFemaleHuman(void){}
    ~CBlackFemaleHuman(void){}

    void Sex()
    {
        cout << "该黑种人的性别为女..." << endl;
    }
};

#endif

