#ifndef __STOPPINGSTATE_H__
#define __STOPPINGSTATE_H__

#include <iostream>

#include "Liftstate.h"

using namespace std;

class CStoppingState : public CLiftState
{
public:
    CStoppingState(void){}
    ~CStoppingState(void){}

    void Open()
    {
        this->CLiftState::m_pContext->SetLiftState(CContext::pOpenningState);
        this->CLiftState::m_pContext->GetLiftState()->Open();
    }

    void Close(){}

    void Run()
    {
        this->CLiftState::m_pContext->SetLiftState(CContext::pRunningState);
        this->CLiftState::m_pContext->GetLiftState()->Run();
    }

    void Stop()
    {
        cout << "电梯停止了..." << endl;
    }
};

#endif