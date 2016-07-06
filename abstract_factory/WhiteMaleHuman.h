#ifndef __WHITEMALEHUMAN_H__
#define __WHITEMALEHUMAN_H__

#include "WhiteHuman.h"

#include <iostream>

using namespace std;

class CWhiteMaleHuman : public CWhiteHuman
{
public:
    CWhiteMaleHuman(void){}
    ~CWhiteMaleHuman(void){}

    void Sex()
    {
        cout << "该白种人的性别为男..." << endl;
    }
};

#endif

