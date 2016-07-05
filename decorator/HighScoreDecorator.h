#ifndef __HIGHSCOREDECORATOR_H__
#define __HIGHSCOREDECORATOR_H__

#include "ReportDecorator.h"
#include "ISchoolReport.h"



class CHighScoreDecorator : public CReportDecorator
{
public:
    CHighScoreDecorator(ISchoolReport *psr);
    ~CHighScoreDecorator(void);

    void Report();

private:
    void ReportHighScore();
};

#endif