#ifndef __FEMALEHUMANFACTORY_H__
#define __FEMALEHUMANFACTORY_H__


#include "StandardHumanFactory.h"

template<class T>

class CFemaleHumanFactory : public CStandardHumanFactory<T>
{
public:
    CFemaleHumanFactory(void){}
    ~CFemaleHumanFactory(void){}

    IHuman * CreateYellowHuman()
    {
        return CreateHuman();
    }

    IHuman * CreateWhiteHuman()
    {
        return CreateHuman();
    }

    IHuman * CreateBlackHuman()
    {
        return CreateHuman();
    }
};

#endif
