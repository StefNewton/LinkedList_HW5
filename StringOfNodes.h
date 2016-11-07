#pragma once

/*
Name:					Stefani Moore
Last Date Modified:		09-27-2016
Assignment:				HW5
*/

//******************************************************
//StringOfNodes.h File
//
//StringOfNodes class declaration
//
//******************************************************

#ifndef STRING_H
#define STRING_H

#include "Node.h" //node struct
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

namespace moore
{
	typedef char C;

	class StringOfNodes
	{
	public:
		StringOfNodes(); //constructor
		C operator[](int index); //[] overloaded to retrieve a char at a given index
		StringOfNodes operator+(const StringOfNodes& charString); //+ overloaded to concatenate strings
		void insert_back(C value); //Insert value at the end of a string
		void insert_front(C value); //Insert value at the front of a string
		bool insert(C value, int pos); //Inserts a value at a position in a string
		Node* begin(); //fxn to return pointer to first char in the string
		
		int size(); //returns current stringSize
		bool empty(); //checks to see if beginPtr == null

	private:
		int numOfNodes = 0; //string size
		Node* headPtr = nullptr; //head ptr initialized to 0
		Node* currPtr = nullptr;//current ptr initialized to 0 used in begin() fxn
	}; //End class string


}//End namespace moore

//Display function declaration
void displayString(moore::StringOfNodes &string);

#endif // !STRING_H
