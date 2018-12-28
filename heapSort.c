#include "utility.h"
#include "heapSort.h"
#include <stdio.h>

void maxHeapifyRecursive(int *seq, int parent, int size)
{
	int leftChild = LEFT(parent); 
	int rightChild = RIGHT(parent); 
	int largest = parent;

	if(leftChild <= size && seq[leftChild] > seq[parent])
		   largest = leftChild; 
	
	if(rightChild <= size && seq[rightChild] > seq[largest])
		   largest = rightChild; 

	if(largest != parent)
	{
		int temp = seq[parent]; 
		seq[parent] = seq[largest]; 
		seq[largest] = temp; 
		maxHeapifyRecursive(seq, largest, size); 
	}
}

void maxHeapify(int *seq, int parent, int size)
{
	int leftChild = LEFT(parent); 
	int rightChild = RIGHT(parent); 
	int largest = parent;
	int temp; 
	
	if(leftChild <= size && seq[leftChild] > seq[parent])
		   largest = leftChild;

	if(rightChild <= size && seq[rightChild] > seq[largest])
		   largest = rightChild; 

	while(largest != parent)
	{
		temp = seq[parent]; 
		seq[parent] = seq[largest]; 
		seq[largest] = temp; 
		parent = largest; 
		leftChild = LEFT(parent); 
		rightChild = RIGHT(parent); 

		if(leftChild <= size && seq[leftChild] > seq[parent])
		   largest = leftChild; 
		 
		if(rightChild <= size && seq[rightChild] > seq[largest])
		   largest = rightChild; 
	} 
}

void buildHeap(int *seq, int size)
{
	for(int index = size / 2; index >= 0;  index--)
		maxHeapify(seq, index, size);
}

void buildHeapRecursive(int *seq, int size)
{
	for(int index = size / 2; index >= 0; index--)
		   maxHeapifyRecursive(seq, index, size);
}

void heapSort(int *seq, int size)
{
	size--; 
	buildHeap(seq, size);	
	int temp; 
	int index = size; 
     
	while(index >= 1)
	{
		   temp = seq[index]; 
		   seq[index] = seq[0]; 
		   seq[0] = temp; 
		   index--; 
		   maxHeapify(seq, 0, index); 
	}	   
}

void heapSortRecursive(int *seq, int size)
{
	size--; 
	buildHeapRecursive(seq, size);
	int temp; 
	int index = size;

	while(index >= 1)
	{
		   temp = seq[index]; 
		   seq[index] = seq[0]; 
		   seq[0] = temp; 
		   index--;
		   maxHeapifyRecursive(seq, 0, index); 
	}	
}
