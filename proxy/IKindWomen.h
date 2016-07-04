#ifndef __IKINDWOMEN_H__
#define __IKINDWOMEN_H__



using namespace std;

class IKindWomen
{
public:
    IKindWomen(void){};
    virtual ~IKindWomen(void){};

    virtual void MakeEyesWithMan() = 0;
    virtual void HappyWithMan() = 0;
};

#endif