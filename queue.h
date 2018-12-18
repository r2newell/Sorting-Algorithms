#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct node
{
	int key; 
	struct node *next; 	
}node;
		
typedef struct queue
{
	node *front; 
	node *tail; 
}queue;
		
bool isEmpty(const queue*); 
bool isFull(void); 
void enqueue(queue *, int); 
void dequeue(queue *, int *);
#endif
