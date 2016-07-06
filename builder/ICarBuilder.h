#ifndef __ICARBUILDER_H__
#define __ICARBUILDER_H__

#include "CarModel.h"

#include <iostream>
#include <vector>



class ICarBuilder
{
public:
    ICarBuilder(void){}
    virtual ~ICarBuilder(void){}

    virtual void SetSequence(std::vector<std::string> *pseq) = 0;
    virtual CCarModel * GetCarModel() = 0;
};

#endif

