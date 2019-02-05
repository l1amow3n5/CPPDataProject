//
//  FileController.cpp
//  CPPDataProject
//
//  Created by Owen, Liam on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"


vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if (dataFile.is_open())
    {
        
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '/r');
            if(rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

vector<Music> FileController :: MusicDataToVector(string filename)
{
    vector<Music> MusicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if (dataFile.is_open())
    {
        
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '/r');
            if(rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    MusicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return MusicVector;
}
