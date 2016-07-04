#ifndef __WHITEHUMAN_H__
#define __WHITEHUMAN_H__

#include "IHuman.h"

class CWhiteHuman : public IHuman
{
public:
    CWhiteHuman(void);
    ~CWhiteHuman(void);
    void Laugh();
    void Cry();
    void Talk();
};

#endif