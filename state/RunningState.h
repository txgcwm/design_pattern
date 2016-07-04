#ifndef __RUNINGSTATE_H__
#define __RUNINGSTATE_H__

#include <iostream>

#include "Liftstate.h"

using namespace std;

class CRunningState : public CLiftState
{
public:
    CRunningState(void){}
    ~CRunningState(void){}

    void Open(){}
    void Close(){}

    void Run()
    {
        cout << "电梯上下跑..." << endl;
    }

    void Stop()
    {
        this->CLiftState::m_pContext->SetLiftState(CContext::pStoppingState);
        this->CLiftState::m_pContext->GetLiftState()->Stop();
    }
};

#endif