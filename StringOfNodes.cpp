/*
Name:					Stefani Moore
Last Date Modified:		09-27-2016
Assignment:				HW5
*/

//*******************************************************************
//StringOfNodes.cpp
//
//Contains StringOfNodes class implentations 
//
//*******************************************************************

#include "StringOfNodes.h"

//constructor

namespace moore
{
	//constructor 
	StringOfNodes::StringOfNodes() 
	{
	}

	//[] overload function
	C StringOfNodes::operator[](int index)
	{
		Node *charPtr = headPtr; //charPtr begins at headPtr
		for (int i = 0; i < index; i++) //traverses list until index is reached
		{
			charPtr = charPtr->nextPtr;
		}

		return charPtr->character; //returns character at charPtr
	}

	//+ overload function
	StringOfNodes StringOfNodes::operator+(const StringOfNodes & charString)
	{

		//Code explained with string1 =  string1 + string2
		StringOfNodes* concatListPtr = this; //concatListPtr points to memory address of string1
		Node* tempPtr = charString.headPtr; //points to head of string2

		while (tempPtr != nullptr) //traverse list until nullptr is reached of string2
		{
			concatListPtr->insert_back(tempPtr->character); //string2 contents inserted at the back of string1
			tempPtr = tempPtr->nextPtr; //traverses string2 until while condition is met to break the loop
		}
		return *concatListPtr; //return pointer to concatenated string of string1+string2
	}

	//insert_back Function
	void StringOfNodes::insert_back(C value)
	{
		if (empty()) //If empty back of list = front of list or headPtr
		{
			headPtr = new Node;
			numOfNodes++;

			headPtr->character = value;
			headPtr->nextPtr = nullptr;
		}
		else //List is not empty
		{
			Node *charPtr = headPtr;
			Node *charPrevPtr = new Node;
			while (charPtr != nullptr) //traverse list to last node
			{
				charPrevPtr = charPtr;
				charPtr = charPtr->nextPtr;
			}

			charPrevPtr->nextPtr = new Node; //allocate memory for new node
			charPrevPtr->nextPtr->character = value; //input value at the end of the list
			numOfNodes++; //increment number of nodes
		}
	}

	//insert_front Function
	void StringOfNodes::insert_front(C value)
	{
		if (empty()) //If list is empty insert front of list
		{
			headPtr = new Node; //allocate memory for a new node at the head of the list
			numOfNodes++; //increment number of nodes

			headPtr->character = value; //store value at the head of the list
			headPtr->nextPtr = nullptr; // current node points to nextPtr that = null
		}
		else //list is not empty
		{
			Node* nodePtr = new Node; //allocate memory for new node
			nodePtr->nextPtr = nullptr; //nextPtr is null
			nodePtr->character = value; //store value in node
			nodePtr->nextPtr = headPtr; //point node to head of the list
			headPtr = nodePtr; //current node points to headPtr
			numOfNodes++; //increment number of nodes
		}
	}

	//insert Function
	bool StringOfNodes::insert(C value, int pos)
	{
		Node* nodePtr = new Node; //allocate memory for a new node
		nodePtr->character = value; //store value in nodePtr

		if (headPtr == nullptr && pos != 0) //list is empty and position is not zero -- Do nothing
		{
			cout << "\nPosition entered is out of range\n";
			return false;
		}
		else if (pos < 0 || pos > size()) //position less than 0 or greater than linked list -- Do nothing
		{
			cout << "\nPosition entered is out of range\n";
			return false;
		}
		else if (pos == 0 && headPtr == nullptr) //List is empty and position == 0 -- add node to beginning of the list
		{
			nodePtr->nextPtr = headPtr;
			headPtr = nodePtr; //nodePtr = first node in the list
			numOfNodes++; //increment number of nodes
			return true; //node added to list return true
		}
		else //List is not empty
		{
			Node* tempPtr = new Node; //allocate memory for new node
			int count = 1; 
			tempPtr = headPtr; //point to the head of the list
			while (count != pos) //traverse list until pos is reached
			{
				tempPtr = tempPtr->nextPtr;
				count++;
			}
			nodePtr->nextPtr = tempPtr->nextPtr; //nextPtr position of nodePtr = nextPtr position of tempPtr
			tempPtr->nextPtr = nodePtr; //nextPtr of tempPtr = value at nodePtr
			numOfNodes++; //increment number of nodes
			return true; //node added to list return true
		}
	}

	//begin Function
	Node* StringOfNodes::begin()
	{ 
		headPtr = new Node; // allocate new node and reference to head ptr
		currPtr = headPtr; // current ptr is the first item on the list which the headPtr points to
		return  currPtr; // return current ptr
	}

	//size Function
	int StringOfNodes::size()
	{
		return numOfNodes; //returns number of nodes in the list
	}

	//empty Function
	bool StringOfNodes::empty()
	{
		return (headPtr == nullptr); //true if headptr == 0 and false if headptr != 0
	}
	
}
