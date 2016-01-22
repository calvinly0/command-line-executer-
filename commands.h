//
//  commands.h
//  Command Executer
//
//  Created by Calvin Ly on 11/26/15.
//  Copyright © 2015 Calvin Ly. All rights reserved.
//

#ifndef commands_h
#define commands_h

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>

using std::cout;
using std::endl;

void CHECKSUM(std::string filepath){
    
    std::string line;
    std::ifstream fin(filepath);
    
    if(!fin)                    //will print error message if file can't open
    {
        cout << "\nError opening file for CHECKSUM!\n";
    }
    else{
    int a = 0;
    int sum = 0;
    while(fin >> line){
        unsigned long l = line.size();          //will calculate the length of line for the for loop's stopping             condition. Put it outside of the loop to minimize function call.
        for(int x = 0; x < l; x++){             //this for loop will sum the decimal value of each
            a = int (line[x]);                  //character in the input file, fin.
            sum += a;                           //sum will then accumulate the total.
        }
    }
    cout << sum % 255 << ", ";                  //calculate 8 bit checksum by modding sum with 255
    //clock to time function
    std::clock_t t;
    t = std::clock();
    cout << (std::clock() - t) / (double)(CLOCKS_PER_SEC * .001) << endl;   //assumed from Programming Exercise that time is represented in clocks per milliseconds.
    fin.close();
    }
    
};

void WORDCOUNT(std::string filepath){
    
    std::string word;    //will traverse file to calculate word count
    unsigned int count = 0;
    std::ifstream fin(filepath);    //open file
    
    if(!fin)                        //will print error message if file can't open
    {
        cout << "\nError opening file for WORDCOUNT!\n";
    }
    else{
    while(fin >> word){             //read through file until there is nothing to read
        count++;                    //increment count to keep track of each word read
    }
        cout << count << ", ";
        //clock to time function
        std::clock_t t;
        t = std::clock();
        cout << (std::clock() - t) / (double)(CLOCKS_PER_SEC * .001) << endl;
    fin.close();
    }
};

void WORDFREQ(std::string filepath, std::string wordToSearch){
    
    std::string temp;   //will traverse file to match wordToSearch
    int count = 0;
    std::ifstream fin(filepath);    //open file
    
    if(!fin)
    {
        cout << "\nError opening file for WORDFREQ!\n";
    }
    else{
        while(fin >> temp){     //read in temp until there's nothing to read
            if(temp == wordToSearch){       //temp matches with word we are looking for
                count++;                    //increment to keep count
            }
        }
   cout << count << ", ";
    //clock to time function
    std::clock_t t;
    t = std::clock();
    cout << (std::clock() - t) / (double)(CLOCKS_PER_SEC * .001) << endl;
    fin.close();
    }
};



#endif /* commands_h */
