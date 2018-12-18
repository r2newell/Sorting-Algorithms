#include <stdlib.h>
#include <stdio.h> 
#include <stdbool.h> 
#include "queue.h"


bool isEmpty(const queue *buffer)
{
	if(buffer->front == NULL)
		   return true; 
	else 
		   return false;
}

bool isFull(void)
{
	node *temp = (node *) malloc(sizeof(node)); 
	if(temp)
	{
		free(temp); 
		return false; 
	}

	return true;
}

void enqueue(queue *buffer, int key)
{
	if(isFull())
	{
		printf("\nWay too many integers to sort.\n"); 
		return; 
	}

	node *temp = (node *)calloc(1, sizeof(node));
	temp->key = key;
	if(isEmpty(buffer))
	{
		buffer->front = temp; 
		buffer->tail  = buffer->front; 
	}
	else
	{
		buffer->tail->next = temp; 
		buffer->tail = temp;
	}
}

 void dequeue(queue *buffer,int *key)
{
	if(isEmpty(buffer))
		   return; 

	*key = buffer->front->key;
	if(buffer->front == buffer->tail)
	{
		   free(buffer->front); 
		   buffer->front = buffer->tail = NULL; 
	}
	else
	{
		node *temp = buffer->front;
		buffer->front = buffer->front->next;			
		free(temp);	
	}
}
