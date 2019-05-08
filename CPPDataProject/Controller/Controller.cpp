//
//  Controller.cpp
//  CPPDataProject
//
//  Created by Owen, Liam on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include "FileController.hpp"
#include "../Testers/GraphTester.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
    //usingNodes();
    //testFiles();
    //testLinear();
    //testGraphs();
    //testTree();
    int size = 101;
    int position = simpleHash(word) % size;
    simpleHash("cat");
    
    
}

long Controller :: simpleHash(string word)
{
    long hash = 0;
    for (int index = 0; index < word.length(); index++)
    {
        hash += (int)(word[index]);
    }
    return hash;
}

void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("Who you callin pinhead");
    cout << wordHolder.getData() << endl;
    
    
}

void testFiles()
{
    vector<CrimeData> Crime = FileController :: readCrimeDataToVector("/Users/lowe1672/Documents/C++ Projects/CPPDataProject/CPPDataProject/Resources/crime.csv");
    
    for (int i = 234; i < 256; i++)
    {
        cout << i << ": contents are: " << Crime[i] << endl;
    }
}

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}

void Controller :: testGraphs()
{
    GraphTester puzzle;
    puzzle.testGraphs();
}

void Controller :: testTree()
{
    BinaryTreeTester traversals;
    traversals.treeStuff();
    
}
