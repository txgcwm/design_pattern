#ifndef __IOUTERUSER_H__
#define __IOUTERUSER_H__

#include "OuterUserBaseInfo.h"
#include "OuterUserHomeInfo.h"
#include "OuterUserOfficeInfo.h"



class IOuterUser
{
public:
    IOuterUser(void){}
    ~IOuterUser(void){}

    COuterUserBaseInfo * GetUserBaseInfo();
    COuterUserHomeInfo * GetUserHomeInfo();
    COuterUserOfficeInfo * GetUserOfficeInfo();
};

#endif

