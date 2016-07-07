#ifndef __NEWCORP_H__
#define __NEWCORP_H__

#include "IProduct.h"

class CNewCorp
{
public:
    CNewCorp(IProduct *pproduct);
    virtual ~CNewCorp(void);

    void MakeMoney();

private:
    IProduct *m_pProduct;
};

#endif


