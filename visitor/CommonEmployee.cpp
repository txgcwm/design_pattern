#include "CommonEmployee.h"

#include <iostream>

using std::string;

CCommonEmployee::CCommonEmployee(void)
{
	this->m_performance = "";
}

CCommonEmployee::~CCommonEmployee(void)
{
}

string CCommonEmployee::GetJob()
{
	return m_performance;
}

void CCommonEmployee::SetJob(string per)
{
	this->m_performance = per;
}

string CCommonEmployee::GetOtherInfo()
{
	string info = "";

	info.append("业绩：");
	info.append(this->m_performance);
	info.append("\t");

	return info;
}

void CCommonEmployee::Accept(IVisitor *pVisitor)
{
	pVisitor->Visit(*this);
}