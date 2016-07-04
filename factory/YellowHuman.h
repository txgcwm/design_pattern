#ifndef __YELLOWHUMAN_H__
#define __YELLOWHUMAN_H__

#include "IHuman.h"

class CYellowHuman : public IHuman
{
public:
    CYellowHuman(void);
    ~CYellowHuman(void);
    void Laugh();
    void Cry();
    void Talk();
};

#endif