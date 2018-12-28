#include "quickSort.h"
#include "utility.h"
#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int seq[100]; 
	generate(seq, 100); 
	printf("\nGenerated sequence:");
	display(seq, 100);
	quickSort(seq, 0, 99); 
	printf("\nSorted sequence:"); 
	display(seq, 100);
	return 0; 
}



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
