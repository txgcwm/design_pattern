#ifndef __BMWMODEL_H__
#define __BMWMODEL_H__

#include "CarModel.h"

class CBMWModel : public CCarModel
{
public:
    CBMWModel(void);
    ~CBMWModel(void);

protected:
    void Start();
    void Stop();
    void Alarm();
    void EngineBoom();
};

#endif

