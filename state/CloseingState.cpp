#include <iostream>

#include "Context.h"
#include "CloseingState.h"

using namespace std;


CCloseingState::CCloseingState(void){}

CCloseingState::~CCloseingState(void){}

void CCloseingState::Open()
{
    this->CLiftState::m_pContext->SetLiftState(CContext::pOpenningState);
    this->CLiftState::m_pContext->GetLiftState()->Open();
}

void CCloseingState::Close()
{
    cout << "电梯门关闭..." << endl;
}

void CCloseingState::Run()
{
    this->CLiftState::m_pContext->SetLiftState(CContext::pRunningState);
    this->CLiftState::m_pContext->GetLiftState()->Run();
}

void CCloseingState::Stop()
{
    this->CLiftState::m_pContext->SetLiftState(CContext::pStoppingState);
    this->CLiftState::m_pContext->GetLiftState()->Stop();
}