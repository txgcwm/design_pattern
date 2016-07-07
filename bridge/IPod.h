#ifndef __IPOD_H__
#define __IPOD_H__

#include "IProduct.h"

class CIPod : public IProduct
{
public:
    CIPod(void);
    ~CIPod(void);

    void BeProducted();
    void BeSelled();
};

#endif