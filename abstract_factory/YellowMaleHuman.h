#ifndef __YELLOWMALEHUMAN_H__
#define __YELLOWMALEHUMAN_H__

#include "YellowHuman.h"

#include <iostream>

using namespace std;

class CYellowMaleHuman : public CYellowHuman
{
public:
    CYellowMaleHuman(void){}
    ~CYellowMaleHuman(void){}

    void Sex()
    {
        cout << "该黄种人的性别为男..." << endl;
    }
};

#endif

