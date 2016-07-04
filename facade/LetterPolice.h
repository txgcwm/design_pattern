#ifndef __LETTERPOLICE_H__
#define __LETTERPOLICE_H__

#include "ILetterProcess.h"

class CLetterPolice
{
public:
    CLetterPolice(void){}
    ~CLetterPolice(void){}

    void CheckLetter(ILetterProcess *pLetterProcess)
    {
        //检查信件，此处省略一万字。
        return;
    }
};

#endif