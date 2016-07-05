#include "HighScoreDecorator.h"

#include <iostream>

using namespace std;

CHighScoreDecorator::CHighScoreDecorator( ISchoolReport *psr ) 
: CReportDecorator(psr)
{
}

CHighScoreDecorator::~CHighScoreDecorator(void)
{
}

void CHighScoreDecorator::Report()
{
    this->ReportHighScore();
    this->CReportDecorator::Report();
}

void CHighScoreDecorator::ReportHighScore()
{
    cout << "这次考试语文最高是75， 数学是78， 自然是80" << endl;
}

