#ifndef __SORTDECORATOR_H__
#define __SORTDECORATOR_H__

#include "ReportDecorator.h"
#include "ISchoolReport.h"



class CSortDecorator : public CReportDecorator
{
public:
    CSortDecorator(ISchoolReport *psr);
    ~CSortDecorator(void);

    void Report();

private:
    void ReportSort();
};

#endif