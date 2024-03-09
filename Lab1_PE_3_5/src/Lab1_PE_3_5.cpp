//============================================================================
// Name        : Lab1_PE_3_5.cpp
//			   : CSC-155 C++ Computer Science 1
//			   : Dept. of CS - Oakton Community College
//			   :
// Author      : Mike Mordec
// Date		   : 08/17/22
// Version     :
//
// Description : Solution to Programming Exercise 3-5 of
//			   : C++ Programming: From Problem Analysis to Program Design 8e,
//			   : by D.S. Malik, Cengage Learning 2018
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	ifstream inFile; //input file stream
	ofstream outFile; //output file stream

	string firstname, lastname; //data type declaration for first name and last name
	double salary, payincrease, updatedsalary; //data type declaration for the salary , pay increase and updated salary

	cout << "Filename: ";
	string filename;
	cin >> filename;
	cout << filename << endl;
	inFile.open(filename);
    //opening the input file
	outFile.open("Ch3_Ex5Output.dat"); //opening the output file

	int count = 0;
	while (!inFile.eof() and count < 3) // while loop till end of the input file
	{
		inFile >> lastname >> firstname >> salary >> payincrease; //reading the input file and assigning the values to the respective variables
		updatedsalary = (salary * (payincrease / 100) + salary); //calculating the updated salary

		outFile << fixed << showpoint << setprecision(2); //setting the precision for the salary

		outFile << firstname << " " << lastname << " " << updatedsalary << endl;
		count ++;//writing into the output file in form of first name , last name and the updated salary
	}

	inFile.close(); //closing the input file
	outFile.close(); //closing the output file

	return 0;

}
