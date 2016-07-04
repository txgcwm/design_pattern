#include <iostream>
#include "IKindwomen.h"



class CWangPo : public IKindWomen
{
public:
    CWangPo(IKindWomen *pKindWomen)
    {
        this->m_pKindWomen = pKindWomen;
    }

    ~CWangPo(void)
    {
        delete this->m_pKindWomen;
    }

    void HappyWithMan(void)
    {
        this->m_pKindWomen->HappyWithMan();
    }

    void MakeEyesWithMan(void)
    {
        this->m_pKindWomen->MakeEyesWithMan();
    }

private:
    IKindWomen *m_pKindWomen;
};


