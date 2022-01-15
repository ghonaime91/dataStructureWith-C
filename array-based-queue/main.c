#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"


int main(void)
{
	Queue queue;
	Queue* qPtr = &queue;
	dataType element;
	dataType* ptrElement = &element;
	int i;

	init(qPtr);

	//-------------------------------

	enqueue('s', qPtr);
	enqueue('y', qPtr);
	enqueue('s', qPtr);
	enqueue('t', qPtr);
	enqueue('e', qPtr);
	enqueue('m', qPtr);

	//-------------------------------
	
	if (isEmpty(qPtr))
		printf("the queue is empty\n");
	else if(isFull(qPtr))
		printf("the queue is empty\n");
	else
		printf("the queue size is %d\n",queueSize(qPtr));





	//-------------------------------

	for (i = qPtr->front; i <= qPtr->rear; i++)
	{
		dequeue(ptrElement, qPtr);
		printf("\n%c\n",*ptrElement);
		printf("size: %d\n", queueSize(qPtr));
		printf("-----------------------------\n");
	}
	
		



	system("pause>0");
}