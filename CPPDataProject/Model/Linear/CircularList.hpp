//
//  CircularList.hpp
//  CPPDataProject
//
//  Created by Owen, Liam on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "../Nodes/DoubleNode.hpp"

template <class Type>
class CircularList = public LinkedList<Type>
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    int size;
    
    DoubleNode<Type> * findNode(int index);
    
public:
    CircularList();
    ~CurcularList();
    
    //List methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove (int index);
    Type setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
};



#endif /* CircularList_h */
