#ifndef __IPRODUCT_H__
#define __IPRODUCT_H__

class IProduct
{
public:
    IProduct(void){}
    virtual ~IProduct(void){}

    virtual void BeProducted() = 0;
    virtual void BeSelled() = 0;
};

#endif

