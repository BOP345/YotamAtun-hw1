#include "stack.h"
#include <iostream>

void push(Stack* s, unsigned int element) 
{
	//using the createNewNode function to push
	s->stack = createNewNode(s->stack, element);
}

int pop(Stack* s)
{
	//using the removeNode function to pop
	return removeNode((&s->stack));
}

void initStack(Stack* s)
{
	s->stack = NULL;
}


void cleanStack(Stack* s)
{
	usIntNode* tempPointer = s->stack;
	//freeing all the memory from the list
	while (s->stack!=NULL)
	{
		tempPointer = s->stack->next;		
		delete(s->stack);
		s->stack = tempPointer;
	}
}


bool isEmpty(Stack* s)
{
	//if the head of the list is NULL the list is empty, if not then it isnt
	return (s->stack==NULL);
}
bool isFull(Stack* s)
{
	//the list is never full as it will alwyas add another node when needed
	return false;
}
