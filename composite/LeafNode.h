#ifndef __LEAFNODE_H__
#define __LEAFNODE_H__

#include "CorpNode.h"



class CLeafNode : public CCorpNode
{
public:
    CLeafNode(void);
    CLeafNode(string name, string pos, int salary);
    ~CLeafNode(void);

    bool IsLeaf();
};

#endif