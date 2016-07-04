#ifndef __ILETTERPROCESSIMPL_H__
#define __ILETTERPROCESSIMPL_H__

#include "ILetterprocess.h"


class CLetterProcessImpl : public ILetterProcess
{
public:
    CLetterProcessImpl(void){}
    ~CLetterProcessImpl(void){}

    void WriteContext(string context)
    {
        cout << "填写信的内容: " << context << endl;
    }

    void FillEnvelope(string address)
    {
        cout << "填写收件人地址及姓名: " << address << endl;
    }
    void LetterIntoEnvelope()
    {
        cout << "把信放到信封中..." << endl;
    }

    void SendLetter()
    {
        cout << "邮递信件..." << endl;
    }
};

#endif