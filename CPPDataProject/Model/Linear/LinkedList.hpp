//
//  LinkedList.hpp
//  CPPDataProject
//
//  Created by Owen, Liam on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "List.hpp"

using namespace std;

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList(); //Virtural so it can be overridden.
    //Helper Methods
    int getSize() const;
    LinearNode<Type> * getFront;
    LinearNode<Type> * getEnd;
    
    //Structor Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
};
#endif /* LinkedList_h */
