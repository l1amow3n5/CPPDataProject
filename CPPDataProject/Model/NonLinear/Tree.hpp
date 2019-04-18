//
//  Tree.hpp
//  CPPDataProject
//
//  Created by Owen, Liam on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Tree_h
#define Tree_h

#include "../Nodes/BinaryTreeNode.h"

template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    //Information Methods
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    //*Data Methods*
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remove(Type data) = 0;
};

#endif /* Tree_h */
