#pragma once
/*
Name:					Stefani Moore
Last Date Modified:		09-27-2016
Assignment:				HW5
*/

//******************************************************
//Node.h File
//
//Node struct declaration
//
//******************************************************

#ifndef NODE_H
#define NODE_H


struct Node
{
	typedef char C;
	C character;	//value type character
	Node* nextPtr = nullptr; //next pointer initialized to null
}; //end Node struct

#endif // !NODE_H

