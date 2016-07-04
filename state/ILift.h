#ifndef __ILIFT_H__
#define __ILIFT_H__


class ILift
{
public:
    static const int OPENING_STATE = 1;
    static const int CLOSING_STATE = 2;
    static const int RUNNING_STATE = 3;
    static const int STOPPING_STATE = 4;

    ILift(void){}
    virtual ~ILift(void){}
    
    virtual void SetState(int state) = 0;
    virtual void Open() = 0;
    virtual void Close() = 0;
    virtual void Run() = 0;
    virtual void Stop() = 0;
};

#endif