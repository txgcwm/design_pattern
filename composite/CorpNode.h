#ifndef __CORPNODE_H__
#define __CORPNODE_H__

#include <iostream>

using namespace std;

class CCorpNode
{
public:
    CCorpNode();
    CCorpNode(string _name, string _pos, int _salary);
    virtual ~CCorpNode(void);

    virtual string GetInfo();
    virtual bool IsLeaf() = 0;

    void SetParent(CCorpNode *_pParent);
    CCorpNode * GetParent();

protected:
    bool m_isLeaf;
    CCorpNode *m_pParent;

private:
    string m_name;
    string m_position;
    int m_salary;
};

#endif