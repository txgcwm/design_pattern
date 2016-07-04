// State.cpp : 定义控制台应用程序的入口点。
#include "ILift.h"
#include "Lift.h"
#include "Context.h"
#include "OpenningState.h"
#include "CloseingState.h"
#include "RunningState.h"
#include "StoppingState.h"

#include <iostream>

using namespace std;

void DoIt()
{
    //ILift.h, Lift.h, Lift.cpp
    ILift *pLift = new CLift();
    pLift->SetState(ILift::STOPPING_STATE);//电梯的初始条件是停止状态。
    pLift->Open();//首先是电梯门开启，人进去
    pLift->Close();//然后电梯门关闭
    pLift->Run();//再然后，电梯跑起来，向上或者向下
    pLift->Stop();//最后到达目的地，电梯停下来
    delete pLift;
}


void DoNew()
{
    //LiftState.h, LiftState.cpp, OpenningState.h, CloseingState.h, RunningState.h, StoppingState.h
    //Context.h, Context.cpp
    CContext context;
    CCloseingState closeingState;
    context.SetLiftState(&closeingState);
    context.Close();
    context.Open();
    context.Run();
    context.Stop();
}

int main(int argc, char* argv[])
{
    cout << "----------使用模式之前----------" << endl;
    DoIt();
    cout << "----------使用模式之后----------" << endl;
    DoNew();

    return 0;
}