#include "CarModel.h"
#include "BenzModel.h"
#include "BMWModel.h"
#include "BenzBuilder.h"
#include "BMWBuilder.h"
#include "Director.h"

#include <vector>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;


void DoBenzRun()
{
    cout << "----------生成奔驰模型----------" << endl;
    CBenzModel *pBenz = new CBenzModel();

    vector<string> seq;

    seq.push_back("engine boom");//客户要求run的时候先发动引擎
    seq.push_back("start");//启动起来
    seq.push_back("stop");//开了一段就停下来

    pBenz->SetSequence(&seq);
    pBenz->Run();
    delete pBenz;

    return;
}

void DoBuilder()
{
    cout << "----------用同一个顺序，生成模型----------" << endl;
    vector<string> seq;

    seq.push_back("engine boom");
    seq.push_back("start");
    seq.push_back("stop");

    CBenzBuilder benzBuilder;
    benzBuilder.SetSequence(&seq);
    CBenzModel *pBenz = dynamic_cast<CBenzModel*>(benzBuilder.GetCarModel());
    pBenz->Run();

    CBMWBuilder bmwBuilder;
    bmwBuilder.SetSequence(&seq);
    CBMWModel *pBmw = dynamic_cast<CBMWModel*>(bmwBuilder.GetCarModel());
    pBenz->Run();

    return;
}

void DoDirector()
{
    cout << "----------批量生成模型----------" << endl;
    CDirector director;

    //1W辆A类型的奔驰车
    for(int i = 0; i < 2; i++)
        director.GetABenzModel()->Run();

    //100W辆B类型的奔驰车
    for(int i = 0; i < 2; i++)
        director.GetBBenzModel()->Run();

    //1000W辆C类型的宝马车
    for(int i = 0; i < 2; i++)
        director.GetCBMWModel()->Run();
}

int main(int argc, char* argv[])
{
    DoBenzRun();

    DoBuilder();

    DoDirector();

    return 0;
}


