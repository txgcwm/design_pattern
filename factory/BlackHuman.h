#ifndef __BLACKHUMAN_H__
#define __BLACKHUMAN_H__

#include "IHuman.h"

class CBlackHuman : public IHuman
{
public:
    CBlackHuman(void);
    ~CBlackHuman(void);
    void Laugh();
    void Cry();
    void Talk();
};

#endif