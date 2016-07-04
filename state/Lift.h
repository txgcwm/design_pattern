#ifndef __LIFT_H__
#define __LIFT_H__

#include "ILift.h"
class CLift : public ILift
{
public:
    CLift(void);
    ~CLift(void);

    void SetState(int state);
    void Open();
    void Close();
    void Run();
    void Stop();

private:
    void OpenWithoutLogic();
    void CloseWithoutLogic();
    void RunWithoutLogic();
    void StopWithoutLogic();

private:
    int m_state;
};

#endif