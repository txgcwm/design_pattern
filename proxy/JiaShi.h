#include <iostream>
#include "IKindwomen.h"



class CJiaShi : public IKindWomen
{
public:
    CJiaShi(void){}

    ~CJiaShi(void){}

    void HappyWithMan(void)
    {
	    cout << " 贾氏和男人做那个... ... " << endl;
	}

    void MakeEyesWithMan(void)
    {
    	cout << " 贾氏抛媚眼 " << endl;
	}
};

