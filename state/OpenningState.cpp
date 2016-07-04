#include <iostream>

#include "Context.h"
#include "OpenningState.h"


COpenningState::COpenningState(void)
{}

COpenningState::~COpenningState(void){}

void COpenningState::Open()
{
    cout << "电梯门开启..." << endl;
}

void COpenningState::Close()
{
    this->CLiftState::m_pContext->SetLiftState(CContext::pCloseingState);
    this->CLiftState::m_pContext->GetLiftState()->Close();
}

void COpenningState::Run()
{}

void COpenningState::Stop()
{}