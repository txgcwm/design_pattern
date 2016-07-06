#include "IHuman.h"
#include "IHumanFactory.h"
#include "FemaleHumanFactory.h"
#include "MaleHumanFactory.h"
#include "MaleHumanFactory.h"
#include "YellowFemaleHuman.h"
#include "YellowMaleHuman.h"
#include "WhiteFemaleHuman.h"
#include "WhiteMaleHuman.h"
#include "BlackFemaleHuman.h"
#include "BlackMaleHuman.h"



void DoIt()
{
    IHumanFactory *pFemaleHumanFactory = new CFemaleHumanFactory<CYellowFemaleHuman>();
    IHuman *pYellowFemaleHuman = pFemaleHumanFactory->CreateYellowHuman();
    pYellowFemaleHuman->Cry();
    pYellowFemaleHuman->Laugh();
    pYellowFemaleHuman->Talk();
    pYellowFemaleHuman->Sex();
    delete pYellowFemaleHuman;
    delete pFemaleHumanFactory;

    IHumanFactory *pMaleHumanFactory = new CMaleHumanFactory<CYellowMaleHuman>();
    IHuman *pYellowMaleHuman = pMaleHumanFactory->CreateYellowHuman();
    pYellowMaleHuman->Cry();
    pYellowMaleHuman->Laugh();
    pYellowMaleHuman->Talk();
    pYellowMaleHuman->Sex();
    delete pYellowMaleHuman;
    delete pMaleHumanFactory;

    return;
}

int main(int argc, char* argv[])
{
    DoIt();

    return 0;
}


