#include "LinkedList.h"
#include <iostream>


usIntNode* createNewNode(usIntNode* headOfList ,unsigned int value)
{
	usIntNode* newNode = NULL;
	//allocating memory to the node
	newNode = new usIntNode;
	newNode->val = value;
	newNode->next = headOfList;
	return newNode;
}

usIntNode* removeNode(usIntNode* theNode)
{
	usIntNode* newStart = theNode->next;
	//freeing the memory of the node
	delete(theNode);
	//returning the new head of the list
	return newStart;
}