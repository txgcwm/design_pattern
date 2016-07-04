#ifndef __BLOCKENEMY_H__
#define __BLOCKENEMY_H__

#include "IStrategy.h"



class CBlockEnemy : public IStrategy
{
public:
    CBlockEnemy(void);
    ~CBlockEnemy(void);

    void Operate(void);
};

#endif