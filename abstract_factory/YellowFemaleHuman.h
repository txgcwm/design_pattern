#ifndef __YELLOWFEMALEHUMAN_H__
#define __YELLOWFEMALEHUMAN_H__

#include "YellowHuman.h"

#include <iostream>

using namespace std;

class CYellowFemaleHuman : public CYellowHuman
{
public:
    CYellowFemaleHuman(void){}
    ~CYellowFemaleHuman(void){}
    
    void Sex()
    {
        cout << "该黄种人的性别为女..." << endl;
    }
};

#endif

