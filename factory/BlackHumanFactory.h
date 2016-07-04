#include "IHumanfactory.h"
#include "BlackHuman.h"



class CBlackHumanFactory : public IHumanFactory
{
public:
    CBlackHumanFactory(void){}
    ~CBlackHumanFactory(void){}
    
    virtual IHuman * CreateHuman()
    {
        return new CBlackHuman();
    }
};