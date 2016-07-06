#ifndef __STANDARDHUMANFACTORY_H__
#define __STANDARDHUMANFACTORY_H__

#include "IHumanFactory.h"
#include "IHuman.h"

template<class T>

class CStandardHumanFactory :public IHumanFactory
{
public:
    CStandardHumanFactory(void){}
    ~CStandardHumanFactory(void){}

    IHuman * CreateHuman()
    {
        return new T;
    }
};

#endif

