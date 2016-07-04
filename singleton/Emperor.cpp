#include "Emperor.h"
#include <iostream>
using namespace std;

CEmperor* CEmperor::m_pEmperor = NULL;
CEmperor::CGarbo CEmperor::m_Garbo;

CEmperor::CEmperor(void)
{
    cout << "Create CEmperor Instance" << endl;
}

CEmperor::~CEmperor(void)
{
    cout << "Destroy CEmperor Instance and release its resource" << endl;
}

void CEmperor::EmperorInfo(void)
{
    char msgBuffer[50] = { 0 };

    snprintf(msgBuffer, 50, "皇ê帝?某3某3某3... ...(%s).", m_EmperorTag.c_str());
    string msg(msgBuffer);
    cout << msg.c_str() << endl;
}

CEmperor* CEmperor::GetInstance()
{
    if (NULL == m_pEmperor) {
        m_pEmperor = new CEmperor();
    }

    return m_pEmperor;
}

void CEmperor::ReleaseInstance()
{
    if (NULL != m_pEmperor) {
        delete m_pEmperor;
        m_pEmperor = NULL;
    }
}

void CEmperor::SetEmperorTag( string tag )
{
    m_EmperorTag = tag;
}
