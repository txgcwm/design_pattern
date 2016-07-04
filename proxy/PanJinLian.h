#include <iostream>

#include "IKindwomen.h"



class CPanJinLian : public IKindWomen
{
public:
    CPanJinLian(void){}
    ~CPanJinLian(void){}

    void HappyWithMan(void)
    {
	    cout << " 潘金莲和男人做那个... ... " << endl;
	}

    void MakeEyesWithMan(void)
    {
	    cout << " 潘金莲抛媚眼 " << endl;
	}
};


