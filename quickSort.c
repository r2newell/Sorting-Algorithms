#include "quickSort.h"
#include "utility.h"
#include <stdio.h> 
#include <stdlib.h> 

//Created by Romario Newell 
//Recursive naive version of quickSort
//Initial call to quickSort should be quickSort(arr, 0, size - 1);

int lomutoPartition(int *seq, int start, int end)
{
	int partition = start - 1; 
	int pivot = seq[end]; 
	int temp; 

	for(int index = start; index < end; index++)
	{
		if(seq[index] <= pivot)
		{
			partition++; 
			temp = seq[partition]; 
			seq[partition] = seq[index]; 
			seq[index] = temp; 
		}			   
	} 
     partition++;	
	seq[end] = seq[partition];
     seq[partition] = pivot;

return partition;	
}

void quickSort(int *seq, int start, int end)
{
	if(start < end)
	{
		int middle = lomutoPartition(seq, start, end); 
		quickSort(seq, start, middle -1); 
		quickSort(seq, middle + 1, end);
	}
}
