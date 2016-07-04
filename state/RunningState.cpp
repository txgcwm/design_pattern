#include <iostream>

#include "Context.h"
#include "RunningState.h"


CRunningState::CRunningState(void){}
    
CRunningState::~CRunningState(void){}

void CRunningState::Open(){}
void CRunningState::Close(){}

void CRunningState::Run()
{
    cout << "电梯上下跑..." << endl;
}

void CRunningState::Stop()
{
    this->CLiftState::m_pContext->SetLiftState(CContext::pStoppingState);
    this->CLiftState::m_pContext->GetLiftState()->Stop();
}