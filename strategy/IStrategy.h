#ifndef __ISTRATEGY_H__
#define __ISTRATEGY_H__



class IStrategy
{
public:
    IStrategy(){};
    virtual ~IStrategy(){};

    virtual void Operate() = 0;
};

#endif