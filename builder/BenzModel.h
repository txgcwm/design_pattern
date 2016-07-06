#ifndef __BENZMODEL_H__
#define __BENZMODEL_H__

#include "CarModel.h"



class CBenzModel : public CCarModel
{
public:
    CBenzModel(void);
    ~CBenzModel(void);

protected:
    void Start();
    void Stop();
    void Alarm();
    void EngineBoom();
};

#endif

