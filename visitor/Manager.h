#ifndef __MANAGER_H__
#define __MANAGER_H__

#include "Employee.h"
#include "IVisitor.h"

#include <iostream>

using std::string;

class CManager : public CEmployee
{
public:
	CManager(void);
	~CManager(void);

	string GetPerformance();
	void SetPerformance(string per);
	void Accept(IVisitor *pVisitor);

protected:
	string GetOtherInfo();

private:
	string m_performance;
};

#endif