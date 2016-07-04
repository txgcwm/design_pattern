#include "Context.h"
#include "BackDoor.h"
#include "GivenGreenLight.h"
#include "BlockEnemy.h"

#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char ** argv)
{
    CContext *pContext;

    cout << "----------刚刚到吴国的时候拆第一个----------" << endl;
    pContext = new CContext(new CBackDoor());
    pContext->Operate();
    delete pContext;

    cout << "\n----------刘备乐不思蜀了，拆第二个了----------" << endl;
    pContext = new CContext(new CGivenGreenLight());
    pContext->Operate();
    delete pContext;

    cout << "\n----------孙权的小兵追了，咋办？拆第三个----------" << endl;
    pContext = new CContext(new CBlockEnemy());
    pContext->Operate();
    delete pContext;

    return 0;
}


