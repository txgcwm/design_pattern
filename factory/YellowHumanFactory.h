#include "IHumanfactory.h"
#include "YellowHuman.h"



class CYellowHumanFactory : public IHumanFactory
{
public:
    CYellowHumanFactory(void){}
    ~CYellowHumanFactory(void){}

    virtual IHuman * CreateHuman(void)
    {
        return new CYellowHuman();
    }
};


