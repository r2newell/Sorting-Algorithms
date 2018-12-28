#ifndef HEAPSORT_H_ 
#define HEAPSORT_H_ 

#define LEFT(i) ((2 * (i)) + 1) //calculate left child of parent
#define RIGHT(i) ((2 * (i)) + 2) //calculate right child of parent
void heapSort(int *, int); 
void heapSortRecursive(int *, int);  //using maxHeapifyRecursive function
void maxHeapifyRecursive(int *, int , int); // recursive version of max-heapify
void maxHeapify(int *, int, int); //iterative version of max-heapify
void buildHeap(int *, int); 
void buildHeapRecursive(int *, int); //using maxHeapify recursive function

#endif
