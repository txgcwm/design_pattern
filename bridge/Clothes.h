#ifndef __CLOTHES_H__
#define __CLOTHES_H__

#include "IProduct.h"

class CClothes : public IProduct
{
public:
    CClothes(void);
    ~CClothes(void);

    void BeProducted();
    void BeSelled();
};

#endif

