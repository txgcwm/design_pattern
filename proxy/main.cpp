#include <iostream>

#include "WangPo.h"
#include "PanJinLian.h"
#include "JiaShi.h"



void DoPanJinLian()
{
    CWangPo *pWangPo;
    // 西门庆想找潘金莲，让王婆来安排。
    pWangPo = new CWangPo(new CPanJinLian());

    pWangPo->MakeEyesWithMan();
    pWangPo->HappyWithMan();

    delete pWangPo;

    return;
}

void DoJiaShi()
{
    CWangPo *pWangPo;
    // 西门庆想找贾氏，让王婆来安排。
    pWangPo = new CWangPo(new CJiaShi());

    pWangPo->MakeEyesWithMan();
    pWangPo->HappyWithMan();

    delete pWangPo;

    return;
}

int main(int argc, char ** argv)
{
    // 西门庆想找潘金莲
    DoPanJinLian();

    // 西门庆想找贾氏
    DoJiaShi();

    return 0;
}


