/*
Name:				Stefani Moore
Last Date Modified:		09-27-2016
Course:				CSCI 2412 - Data Structures
Assignment:			HW5
Description:			Specify and implement an ADT character string by using a linked chain of characters. 

Status:				Compiles and runs successfully via Microsoft Visual Studios Community 2015 and  
				csegrid.ucdenver.pvt

				**Meets all requirements as understood by student**

*/

#include "StringOfNodes.h"


int main()
{
	moore::StringOfNodes string1, string2, string3, string4; //StringOfNodes objects


	string1.insert_back('c'); //test insert_back fxn
	string1.insert_back('d');
	string1.insert_front('a'); //test insert_front fxn for non-empty string
	string1.insert('b', 1); //test insert fxn for non-empty string

	//display string 1 contents
	cout << "\nString1: ";
	displayString(string1);

	string2.insert_back('p');
	string2.insert_front('m');
	string2.insert('n', 1);
	string2.insert('o', 2);

	//display string 2 contents
	cout << "\nString2: ";
	displayString(string2);

	string1 = string1 + string2; //test string concatenation
	//display string1 + string2
	cout << "\nString1 + String2: ";
	displayString(string1);

	string3.insert('x', 0); //test insert fxn with empty string
	
	//display string 3 contents
	cout << "\nString3: ";
	displayString(string3);
	
	cout << "\nTest out of range insert: ";
	string3.insert('o', 5); //test insert fxn out of range
	
	
	string4.insert_front('k'); //test insert_front fxn for empty string
	cout << "\nString4: ";
	displayString(string4);

	string4 = string3 + string4 + string2; //test multiple string concatenation
	cout << "\nString3 + String4 + String2: ";
	displayString(string4);

	cout << "\nPress Enter to exit\n";

	cin.get(); //Press enter to exit program
	return 0;
}


void displayString(moore::StringOfNodes &string)
{
	if(string.empty())
	{
		cout << "The string list is empty.\n\n";
	}
	else
	{
		for (int i = 0; i < string.size(); i++)
			cout << string[i];
		cout << endl;
	}
}
