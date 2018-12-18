// Created by Romario Newell
// Simple sorting routine  
#include <stdio.h> 
#include <stdlib.h> 
#include "utility.h"


void bubbleSort(int *seq, int size)
{
	int temp; 

	for(int index = 0; index < size; index++)
	{
		for(int position = 0; position < size -1; position++)
		{
			if(seq[position] > seq[position + 1])
			{
				temp = seq[position]; 
				seq[position] = seq[position + 1]; 
				seq[position + 1]= temp; 
			}
		}
	}
}
