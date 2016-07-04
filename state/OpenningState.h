#ifndef __OPENINGSTATE_H__
#define __OPENINGSTATE_H__

#include <iostream>

#include "Liftstate.h"

using namespace std;

class COpenningState : public CLiftState
{
public:
    COpenningState(void);
    ~COpenningState(void);

    void Open();

    void Close();

    void Run();
    void Stop();
};

#endif