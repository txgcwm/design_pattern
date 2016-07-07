#ifndef __SHANZHAICORP_H__
#define __SHANZHAICORP_H__

#include "NewCorp.h"
#include "IProduct.h"



class CShanZhaiCorp : public CNewCorp
{
public:
    CShanZhaiCorp(IProduct *pproduct);
    ~CShanZhaiCorp(void);

    void MakeMoney();
};

#endif

