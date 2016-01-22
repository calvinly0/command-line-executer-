//
//  main.cpp
//  Command Executer
//
//  Created by Calvin Ly on 11/26/15.
//  Copyright © 2015 Calvin Ly. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include "commands.h"


using std::cout;
using std::endl;


int main(){
    std::string commandFilename, line, command, path, word;
    cout << "Please enter your command file name and path if applicable (e.g. command.txt or /Users/username/Desktop/command.txt): \n";
    getline(std::cin, commandFilename);
    std::ifstream inFile(commandFilename);
    
    do {
        inFile >> command;
        
        if(command == "CHECKSUM,"){
            inFile >> path;
            cout << command << " " << path << ", ";
            
            CHECKSUM(path);
        }
        else if(command == "WORDCOUNT,"){
            inFile >> path;
            cout << command << " " << path << ", ";
            
            WORDCOUNT(path);
        }
        else if(command == "WORDFREQ,"){
            inFile >> path >> word;
            path.pop_back();
            cout << command << " " << path << ", " << word << " ";
            
            WORDFREQ(path, word);
        }
    }
    while(std::getline(inFile, line));

    
    return 0;
    
}
