#include <iostream>

#include "Context.h"
#include "StoppingState.h"

CStoppingState::CStoppingState(void){}
CStoppingState::~CStoppingState(void){}

void CStoppingState::Open()
{
    this->CLiftState::m_pContext->SetLiftState(CContext::pOpenningState);
    this->CLiftState::m_pContext->GetLiftState()->Open();
}

void CStoppingState::Close(){}

void CStoppingState::Run()
{
    this->CLiftState::m_pContext->SetLiftState(CContext::pRunningState);
    this->CLiftState::m_pContext->GetLiftState()->Run();
}

void CStoppingState::Stop()
{
    cout << "电梯停止了..." << endl;
}