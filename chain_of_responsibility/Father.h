#ifndef __FATHER_H__
#define __FATHER_H__

#include "Handler.h"
#include "IWomen.h"

class CFather : public CHandler
{
public:
    CFather(void);
    ~CFather(void);

    void Response(IWomen *pwomen);
};

#endif

