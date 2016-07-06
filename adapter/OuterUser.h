#ifndef __OUTERUSER_H__
#define __OUTERUSER_H__

#include "IOuterUser.h"
#include "OuterUserBaseInfo.h"
#include "OuterUserHomeInfo.h"
#include "OuterUserOfficeInfo.h"



class COuterUser: public IOuterUser
{
public:
    COuterUser(void);
    ~COuterUser(void);

    COuterUserBaseInfo * GetUserBaseInfo();
    COuterUserHomeInfo * GetUserHomeInfo();
    COuterUserOfficeInfo * GetUserOfficeInfo();
};

#endif


