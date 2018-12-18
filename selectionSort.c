//Created by Romario Newell
//Simple soritng routine 

#include "utility.h" 
#include <stdio.h> 
#include <stdlib.h> 
 

void selectionSort(int *seq, int size)
{
	int smallest; 
	int temp; 
	for(int index = 0; index < size; index++)
	{
		   smallest = index; 
		for(int position = index + 1; position < size; position++)
			   if(seq[position] < seq[smallest])
					 smallest = position; 
		
		temp = seq[index]; 
		seq[index] = seq[smallest]; 
		seq[smallest] = temp;
	}
	
}
