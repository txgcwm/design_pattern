#ifndef __NEWHOUSECORP_H__
#define __NEWHOUSECORP_H__

#include "NewCorp.h"
#include "House.h"



class CNewHouseCorp : public CNewCorp
{
public:
    CNewHouseCorp(CHouse *pHouse);
    ~CNewHouseCorp(void);

    void MakeMoney();
};

#endif

