#ifndef __IGROUP_H__
#define __IGROUP_H__



class IGroup
{
public:
    IGroup(void){}
    virtual ~IGroup(void){}

    virtual void Find() = 0;
    virtual void Add() = 0;
    virtual void Delete() = 0;
    virtual void Change() = 0;
    virtual void Plan() = 0;
};

#endif