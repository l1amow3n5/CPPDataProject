//
//  Array.hpp
//  CPPDataProject
//
//  Created by Owen, Liam on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    //Constructors
    Array<Type>(int size);
    //Copy Constructors
    Array<Type>(const Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};
#endif /* Array_h */
