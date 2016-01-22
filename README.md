# command-line-executer-
Written in C++. Parses an input text file to perform several operations

README
-------

Project: Programming Exercise - Command Executer 
by: Calvin Ly
Last Edit: 11/28/2015

Overview
----------
This program was written in Xcode with C++. The program reads a list of commands from a text file and then executes and prints the results along with the time required to execute the function. The three functions are 8 bit checksum (CHECKSUM: 1 parameter), word count (WORDCOUNT: 1 parameter), word frequency count (WORDFREQ: 2 parameters). Each line of the command text file will begin with the function to be called followed by its parameters separated by a comma and a space. Example command file contents:

CHECKSUM, /path/to/example.dat 
WORDCOUNT, /path/to/countthewords.txt 
WORDFREQ, /path/to/findMyWords.txt, hello 
WORDFREQ, /path/to/findMyWords.txt, world 
CHECKSUM, /path/to/countthewords.txt 
WORDCOUNT, /path/to/findMyWords.txt

In the design and development of this program it was assumed that the outputted clocked time for each function was in milliseconds. Thus in the calculations, CLOCKS_PER_SEC is multiplied by .001. 

File List
-----------
main.cpp
commands.h
Command Executer.xcodeproj

Test_Files
	- command.txt
	- countthewords.txt
	- example.dat
	- findMyWords.txt


Installation, Compiling, and Execution
---------------------------------------
Xcode (Mac OS X):

- Unzip files in the same directory. Test_Files will be in a separate directory.
- Open Command Executer.xcodeproj in Xcode
- Build and Run program
- Program will prompt user for command file name and path

Initial program message will read:

	Please enter your command file name and path if applicable (e.g. command.txt or /Users/username/Desktop/command.txt):

If the command text file is not in the same directory as the .xcodeproj file, please specify path. Example:

	/Users/user/Desktop/command.txt

	OR

	command.txt

Sample run using the included test files:

	Please enter your command file name and path if applicable (e.g. command.txt or /Users/username/Desktop/command.txt): 
	/Users/user/Desktop/command.txt
	CHECKSUM, /Users/user/Desktop/example.dat, 27, 0.003
	WORDCOUNT, /Users/user/Desktop/countthewords.txt, 4575, 0.004
	WORDFREQ, /Users/user/Desktop/findMyWords.txt, hell00 3, 0
	WORDFREQ, /Users/user/Desktop/findMyWords.txt, world55 3, 0.001
	CHECKSUM, /Users/user/Desktop/countthewords.txt, 180, 0
	WORDCOUNT, /Users/user/Desktop/findMyWords.txt, 915, 0.001
	Program ended with exit code: 0

Troubleshooting: If Xcode is having issues locating your command text file or any of the data files please navigate to Product > Scheme > Edit Scheme... and under Working Directory, select the location of Command Executer files.


Terminal or UNIX:

Compile using C++11 in the Terminal by entering:
	
	clang++ -std=c++11 main.cpp

Please follow the same instructions from Xcode (Mac OS X) to enter the name and path of your command text file correctly.


Information
------------
Thank you for reading! Please don't hesitate to let me know if you have any questions.

Calvin Ly
calvin.ly8@gmail.com


