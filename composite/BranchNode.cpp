#include "BranchNode.h"



CBranchNode::CBranchNode(void)
{
    m_isLeaf = false;
}

CBranchNode::CBranchNode(string name, string pos, int salary) 
: CCorpNode(name, pos, salary)
{
    m_isLeaf = false;
}

CBranchNode::~CBranchNode(void)
{
}

void CBranchNode::Add(CCorpNode *pcorpNode)
{
    pcorpNode->SetParent(this);
    m_subordinateList.push_back(pcorpNode);
}

vector<CCorpNode *> CBranchNode::GetSubordinateInfo()
{
    return this->m_subordinateList;
}

bool CBranchNode::IsLeaf()
{
    return m_isLeaf;
}