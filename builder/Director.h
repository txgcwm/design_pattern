#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__

#include <vector>

#include "BenzModel.h"
#include "BMWModel.h"
#include "BenzBuilder.h"
#include "BMWBuilder.h"



class CDirector
{
public:
    CDirector(void);
    ~CDirector(void);
    CBenzModel * GetABenzModel();
    CBenzModel * GetBBenzModel();
    CBMWModel * GetCBMWModel();
    CBMWModel * GetDBMWModel();

private:
    std::vector<std::string> * m_pSeqence;
    CBenzBuilder * m_pBenzBuilder;
    CBMWBuilder * m_pBMWBuilder;
};

#endif