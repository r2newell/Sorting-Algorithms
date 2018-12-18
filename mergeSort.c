#include <stdio.h> 
#include <stdlib.h> 
#include "queue.h"
#include "utility.h"

void merge(int *seq, int start , int middle, int end)
{
	queue buffer1;
	queue buffer2;
	
	buffer1.front = buffer2.front = buffer1.tail = buffer2.tail = NULL;

	int index = start;

	for(index = start; index <= middle; index++)
	    enqueue(&buffer1, seq[index]);

	for(index = middle +1 ; index <= end; index++)
	    enqueue(&buffer2, seq[index]);

	 index = start; 	
	while(!(isEmpty(&buffer1) || isEmpty(&buffer2)))
	{
		if(buffer1.front->key <= buffer2.front->key)	
			   dequeue(&buffer1, &seq[index]); 
		else
			   dequeue(&buffer2, &seq[index]);
		index++; 
	}

	while(!isEmpty(&buffer1))
	{
		dequeue(&buffer1,&seq[index]); 
		index++;
	}

	while(!isEmpty(&buffer2))
	{
		dequeue(&buffer2,&seq[index]); 
		index++;
	}

}

void mergeSort(int *seq, int start, int end)
{
	if(start < end)
	{
		int middle = (start + end - 1) / 2; 
		mergeSort(seq, start, middle); 
		mergeSort(seq, middle + 1, end); 
		merge(seq, start, middle, end);
	}

}
