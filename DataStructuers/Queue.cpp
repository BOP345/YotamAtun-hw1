#include "queue.h"
#include <iostream>


void initQueue(Queue* q, unsigned int size)
{
	int i = 0;
	//creating an array for the queue and filling it with zeros
	q->start = new unsigned int[size];
	//turning all the values to zero to avoid grabage values
	//for (i = 0; i < size; i++)
	//{
	//	q->start[i] = 0;
	//}
	//saving the max size and putting 0 in the currsize
	q->currSize = 0;
	q->maxSize = size;
}
void cleanQueue(Queue* q)
{
	//freeing all the memory in the array
	delete[](q->start);
	//turning the maxSize and currSize to 0
	q->currSize = 0;
	q->maxSize = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	//adding the value to the end
	q->start[q->currSize] = newValue;
	q->currSize++;
}
int dequeue(Queue* q)
{
	int i = 0;
	int removedValue = 0;
	//making sure the queue isnt empty before attemmpting to remove an element
	if (q->currSize == 0)
	{
		return -1;
	}
	//saving the value in a seperate int
	removedValue = q->start[0];
	//going through the whole array and moving everything one step to remove the first one
	for (i = 0; i < q->currSize-1; i++)
	{
		q->start[i] = q->start[i + 1];
	}
	q->start[q->currSize - 1] = 0;
	q->currSize--;
	//returning the removed value 
	return removedValue;
	
}

bool isEmpty(Queue* s)
{
	//checking if the size is 0 to check if its empty
	if (s->currSize == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull(Queue* s)
{
	//checking if the current size is the same as the mac size to see if its full
	if (s->currSize == s->maxSize)
	{
		return true;
	}
	else
	{
		return false;
	}
}
