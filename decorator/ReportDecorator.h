#ifndef __REPORTDECORATOR_H__
#define __REPORTDECORATOR_H__

#include "ISchoolReport.h"



class CReportDecorator : public ISchoolReport
{
public:
    CReportDecorator(ISchoolReport *psr);
    virtual ~CReportDecorator(void);

    void Report();
    void Sign(string name);

private:
    ISchoolReport *m_pSchoolReport;
};

#endif