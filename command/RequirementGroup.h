#ifndef __REQUIREMENTGROUP_H__
#define __REQUIREMENTGROUP_H__

#include "IGroup.h"



class CRequirementGroup :public IGroup
{
public:
    CRequirementGroup(void);
    ~CRequirementGroup(void);

    void Find();
    void Add();
    void Delete();
    void Change();
    void Plan();
};

#endif