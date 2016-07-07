#ifndef __HOUSE_H__
#define __HOUSE_H__

#include "IProduct.h"


class CHouse : public IProduct
{
public:
    CHouse(void);
    ~CHouse(void);

    void BeProducted();
    void BeSelled();
};

#endif

