#ifndef __FOUTHGRADESCHOOLREPORT_H__
#define __FOUTHGRADESCHOOLREPORT_H__

#include "ISchoolReport.h"



class CFouthGradeSchoolReport : public ISchoolReport
{
public:
    CFouthGradeSchoolReport(void);
    ~CFouthGradeSchoolReport(void);

    void Report();
    void Sign(string name);
};

#endif