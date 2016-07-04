#ifndef __ILETTERPROCESS_H__
#define __ILETTERPROCESS_H__

#include <iostream>
#include <string>

using namespace std;

class ILetterProcess
{
public:
    ILetterProcess(void){}
    virtual ~ILetterProcess(void){}

    virtual void WriteContext(string context) = 0;
    virtual void FillEnvelope(string address) = 0;
    virtual void LetterIntoEnvelope() = 0;
    virtual void SendLetter() = 0;
};

#endif