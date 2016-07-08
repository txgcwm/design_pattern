#ifndef __WOMEN_H__
#define __WOMEN_H__

#include "IWomen.h"

#include <iostream>

using std::string;

class CWomen : public IWomen
{
public:
    CWomen(int _type, string _request);
    ~CWomen(void);

    int GetType();
    string GetRequest();

private:
    int m_type;
    string m_request;
};

#endif

