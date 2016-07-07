#ifndef __IPROJECTITERATOR_H__
#define __IPROJECTITERATOR_H__

#include "IIterator.h"

class IProject;

class IProjectIterator : public IIterator
{
public:
    IProjectIterator(void){}
    virtual ~IProjectIterator(void){}

    virtual bool HasNext() = 0;
    virtual IProject * Next() = 0;
};

#endif

