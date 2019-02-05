//
//  Controller.hpp
//  CPPDataProject
//
//  Created by Owen, Liam on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "FileController.hpp"

using namespace std;

void testFiles();


class Controller
{
private:
    void usingNodes();
public:
    void start();
};

void testFiles()
{
    vector<CrimeData> crimeVector;
    
    for (int i = 234; i < 256; i++)
    {
        cout << i << ": contents are: " << crimeVector[i] << endl;
    }
}

#include <stdio.h>

#endif /* Controller_hpp */
