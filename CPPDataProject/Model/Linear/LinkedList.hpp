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

template <class Type>
LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}

template <class Type>
LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure->getNextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}

template <class Type>
void LinkedList<Type> :: add(Type item)
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    
    this->end = newData;
    
    this->size += 1;
}

template <class Type>
LinkedList<Type> :: addAtIndex(int index, Type item)
{
    
}
#endif /* LinkedList_h */
