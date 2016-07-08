#ifndef __SON_H__
#define __SON_H__


#include "Handler.h"
#include "IWomen.h"

class CSon : public CHandler
{
public:
    CSon(void);
    ~CSon(void);

    void Response(IWomen *pwomen);
};

#endif