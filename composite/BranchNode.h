//

#pragma once
#include "corpnode.h"
#include "CorpNode.h"
#include <vector>
#ifndef __BRANCHNODE_H__
#define __BRANCHNODE_H__

#include <iostream>
#include <vector>
#include <string>



class CBranchNode : public CCorpNode
{
public:
    CBranchNode(void);
    CBranchNode(string name, string pos, int salary);
    ~CBranchNode(void);

    void Add(CCorpNode *pcorpNode);
    vector<CCorpNode *> GetSubordinateInfo();
    bool IsLeaf();

private:
    vector<CCorpNode *> m_subordinateList;
};

#endif