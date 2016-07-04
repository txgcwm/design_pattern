#include "IHumanfactory.h"
#include "WhiteHuman.h"



class CWhiteHumanFactory : public IHumanFactory
{
public:
    CWhiteHumanFactory(void){}
    ~CWhiteHumanFactory(void){}
    
    virtual IHuman * CreateHuman(void)
    {
        return new CWhiteHuman();
    }
};

