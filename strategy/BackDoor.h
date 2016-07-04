#include "IStrategy.h"



class CBackDoor : public IStrategy
{
public:
    CBackDoor(void);
    ~CBackDoor(void);

    void Operate(void);
};
