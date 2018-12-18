#include <stdio.h> 
#include <stdlib.h>
#include "utility.h" 

//Created by Romario Newell
//Simple Sorting routine


void insertionSort(int *seq, int size)
{
	int key; 
	int position; 
	for(int index = 1; index < size; index++)
	{
		key = seq[index]; 
		position = index - 1; 

		while(position >= 0 && seq[position] > key)
		{
			seq[position + 1] =  seq[position]; 
			position--; 
			seq[position + 1] = key; 

		}
	}

}
