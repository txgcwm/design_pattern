#ifndef __IUSERINFO_H__
#define __IUSERINFO_H__

#include <iostream>

using std::string;

class IUserInfo
{
public:
    IUserInfo(void){}
    virtual ~IUserInfo(void){}

    virtual string GetUserName() = 0;
    virtual string GetHomeAddress() = 0;
    virtual string GetMobileNumber() = 0;
    virtual string GetOfficeTelNumber() = 0;
    virtual string GetJobPosition() = 0;
    virtual string GetHomeTelNumber() = 0;
};

#endif

