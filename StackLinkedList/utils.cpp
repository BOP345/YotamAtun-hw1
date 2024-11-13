#include "utils.h"
#include <iostream>


void reverse(int* nums, unsigned int size)
{
	int i = 0;
	int* reversed = new int [size];
	//reversing the array into the new array
	for (i = 0;i < size; i++)
	{
		reversed[i] = nums[size - 1 - i];
	}
	//copying the values of the reversed array into the original and freeing the array's memory
	for (i = 0; i < size; i++)
	{
		nums[i] = reversed[i];
	}
	//freeing the allocated memory for the new array
		delete(reversed);
}

int* reverse10()
{
	int* array = new int[10];
	int i = 0;
	printf("please enter 10 numbers: ");
	for (i = 0; i < 10; i++)
	{
		std::cin>>array[i];
	}
	reverse(array, 10);
	return array;
}