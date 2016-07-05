#ifndef __DELETEPAGECOMMAND_H__
#define __DELETEPAGECOMMAND_H__



#include "ICommand.h"

class CDeletePageCommand : public ICommand
{
public:
    CDeletePageCommand(void);
    ~CDeletePageCommand(void);

    void Execute();
};

#endif