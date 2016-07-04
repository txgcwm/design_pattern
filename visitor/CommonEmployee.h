#ifndef __COMMONEMPLOYEE_H__
#define __COMMONEMPLOYEE_H__

#include "Employee.h"
#include "IVisitor.h"

#include <iostream>

using std::string;

class CCommonEmployee : public CEmployee
{
public:
	CCommonEmployee(void);
	~CCommonEmployee(void);

	string GetJob();
	void SetJob(string per);
	void Accept(IVisitor *pVisitor);

protected:
	string GetOtherInfo();

private:
	string m_performance;
};

#endif