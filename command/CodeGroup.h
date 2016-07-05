#ifndef __CODEGROUP_H__
#define __CODEGROUP_H__

#include "IGroup.h"



class CCodeGroup : public IGroup
{
public:
    CCodeGroup(void);
    ~CCodeGroup(void);

    void Find();
    void Add();
    void Delete();
    void Change();
    void Plan();
};

#endif