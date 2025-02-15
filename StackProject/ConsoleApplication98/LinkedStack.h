#pragma once

#ifndef LINKED_STACK_
#define LINKED_STACK_



#include <iostream>
#include <string>
#include <vector>
#include "Node.h"
#include "StackInterface.h"


template<class ItemType>
class LinkedStack : public StackInterface<ItemType>
{
private:
	Node<ItemType>* topPtr; // Pointer to first node in the chain;
	// this node contains the stack's top

public:
	// Constructors and destructor:
	LinkedStack();                                   // Default constructor
	LinkedStack(const LinkedStack<ItemType>& aStack);// Copy constructor 
	virtual ~LinkedStack();                          // Destructor

	// Stack operations:
	bool isEmpty() const;
	bool push(const ItemType& newItem);
	bool pop();
	ItemType peek() const;
}; // end LinkedStack

#include"LinkedStack.inl"
#endif
