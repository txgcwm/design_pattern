#ifndef __IITERATOR_H__
#define __IITERATOR_H__

class IProject;

class IIterator
{
public:
    IIterator(void){}
    virtual ~IIterator(void){}

    virtual bool HasNext() = 0;
    virtual IProject * Next() = 0;
};

#endif

