#ifndef __ISCHOOLREPORT_H__
#define __ISCHOOLREPORT_H__

#include <iostream>

using std::string;

class ISchoolReport
{
public:
    ISchoolReport(void){}
    virtual ~ISchoolReport(void){}

    virtual void Report() = 0;
    virtual void Sign(string name) = 0;
};

#endif