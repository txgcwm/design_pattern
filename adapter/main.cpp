#include "IOuterUser.h"
#include "IUserInfo.h"
#include "UserInfo.h"
#include "OuterUserInfo.h"



void DoIt()
{
    IUserInfo *pYourGirl = new CUserInfo();

    for(int i = 0; i < 101; i += 20) {
        pYourGirl->GetMobileNumber();
    }

    delete pYourGirl;
}

void NowDoIt()
{
    IUserInfo *pYourGirl = new COuterUserInfo();

    for(int i = 0; i < 101; i += 20) {
        pYourGirl->GetMobileNumber();
    }

    delete pYourGirl;
}

int main(int argc, char* argv[])
{
    DoIt();

    NowDoIt();

    return 0;
}

