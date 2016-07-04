#ifndef __IVISITOR_H__
#define __IVISITOR_H__

class CCommonEmployee;
class CManager;

class IVisitor
{
public:

    IVisitor(void){}
    virtual ~IVisitor(void){}

    virtual void Visit(CCommonEmployee commonEmployee) = 0;
    virtual void Visit(CManager manager) = 0;
    virtual int GetTotalSalary() = 0;
};

#endif