#ifndef __HUSBAND_H__
#define __HUSBAND_H__

#include "Handler.h"
#include "IWomen.h"

class CHusband : public CHandler
{
public:
    CHusband(void);
    ~CHusband(void);

    void Response(IWomen *pwomen);
};

#endif

