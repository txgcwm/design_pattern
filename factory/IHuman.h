#ifndef __IHUMAN_H__
#define __IHUMAN_H__

class IHuman
{
public:
    IHuman(void){};
    virtual ~IHuman(void){};
    
    virtual void Laugh() = 0;
    virtual void Cry() = 0;
    virtual void Talk() = 0;
};

#endif


