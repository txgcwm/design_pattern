#ifndef __ADDREQUIREMENTCOMMAND_H__
#define __ADDREQUIREMENTCOMMAND_H__

#include "ICommand.h"



class CAddRequirementCommand : public ICommand
{
public:
    CAddRequirementCommand(void);
    ~CAddRequirementCommand(void);

    void Execute();
};

#endif