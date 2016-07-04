#ifndef __IHUMANFACTORY_H__
#define __IHUMANFACTORY_H__

#include "IHuman.h"

class IHumanFactory
{
public:
    IHumanFactory(){};
    virtual ~IHumanFactory(){};
    virtual IHuman * CreateHuman() = 0;
};

#endif

