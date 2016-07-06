#ifndef __CARMODEL_H__
#define __CARMODEL_H__

#include <vector>
#include <iostream>



class CCarModel
{
public:
    CCarModel(void);
    virtual ~CCarModel(void);

    void Run();
    void SetSequence(std::vector<std::string> *pSeq);

protected:
    virtual void Start() = 0;
    virtual void Stop() = 0;
    virtual void Alarm() = 0;
    virtual void EngineBoom() = 0;

private:
    std::vector<std::string> * m_pSequence;
};

#endif


