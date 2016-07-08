#ifndef __IWOMEN_H__
#define __IWOMEN_H__


#include <iostream>

using std::string;

class IWomen
{
public:
    IWomen(void){}
    virtual ~IWomen(void){}

    virtual int GetType() = 0;
    virtual string GetRequest() = 0;
};

#endif

