#ifndef __WHITEFEMALEHUMAN_H__
#define __WHITEFEMALEHUMAN_H__

#include "WhiteHuman.h"

#include <iostream>

using namespace std;

class CWhiteFemaleHuman : public CWhiteHuman
{
public:
    CWhiteFemaleHuman(void){}
    ~CWhiteFemaleHuman(void){}

    void Sex()
    {
        cout << "该白种人的性别为女..." << endl;
    }
};

#endif

