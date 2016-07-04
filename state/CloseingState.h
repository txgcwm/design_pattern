#ifndef __CLOSEINGSTATE_H__
#define __CLOSEINGSTATE_H__

#include <iostream>

#include "Liftstate.h"

using namespace std;

class CCloseingState : public CLiftState
{
public:
    CCloseingState(void);
    ~CCloseingState(void);

    void Open();

    void Close();

    void Run();

    void Stop();
};

#endif
