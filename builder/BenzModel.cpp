#include "BenzModel.h"

#include <iostream>

using std::cout;
using std::endl;

CBenzModel::CBenzModel(void)
{
}

CBenzModel::~CBenzModel(void)
{
}

void CBenzModel::Start()
{
    cout << "奔驰发动..." << endl;
}

void CBenzModel::Stop()
{
    cout << "奔驰停车..." << endl;
}

void CBenzModel::Alarm()
{
    cout << "奔驰鸣笛" << endl;
}

void CBenzModel::EngineBoom()
{
    cout << "奔驰引擎声音是这样...." << endl;
}

