#include "LinkedList.h"
#include <iostream>


usIntNode* createNewNode(usIntNode* headOfList, unsigned int value)
{
	usIntNode* newNode = new usIntNode;
	usIntNode* currentNode = headOfList;
	newNode->val = value;
	newNode->next = NULL;
	//if the list is empty, return the new node to put in the head
	if (headOfList == NULL)
	{
        return newNode;
	}
	//getting to the end of the list
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}
	//adding the new node at the end
	currentNode->next = newNode;
	//returning the start of the list
	return headOfList;
}

int removeNode(usIntNode** firstNode)
{
    usIntNode* currentNode = *firstNode;
    int value = 0;
    //if the list is empty, returning -1
    if (*firstNode == NULL) 
    {
        return -1;
    }
    //if theres only one node, removing it and updating the first node
    if ((*firstNode)->next == NULL)
    {
        value = (*firstNode)->val;
        delete (*firstNode);
        (*firstNode) = NULL;
        return value;
    }
    //getting to the end  of the list
    while (currentNode->next->next != NULL) 
    {
        currentNode = currentNode->next;
    }
    //getting the value of the last node, deleting it, and updating the second from the end node next pointer
    value = currentNode->next->val;
    delete (currentNode->next);
    currentNode->next = NULL;
    return value;
}