#include "Queue.h"


void init(Queue*queuePtr)
{
	queuePtr->front = -1;
	queuePtr->rear =  -1;
}

//----------------------------------------

int isEmpty(Queue* queuePtr)
{
	return ( (queuePtr->front == -1) && (queuePtr->rear == -1) ) ? 1 : 0;
}

//----------------------------------------

int isFull(Queue* queuePtr)
{
	return ( (queuePtr->rear + 1) % MAX == queuePtr->front ) ? 1 : 0;
}

//----------------------------------------

int enqueue(dataType element, Queue* queuePtr)
{

	if ((queuePtr->rear + 1) % MAX == queuePtr->front)
		return 0;

	else if ((queuePtr->front == -1) && (queuePtr->rear == -1))
		queuePtr->front = queuePtr->rear = 0;

	else
		queuePtr->rear = (queuePtr->rear + 1) % MAX;


	queuePtr->arr[queuePtr->rear] = element;

	
	return 1;
}

//----------------------------------------

int dequeue(dataType* element, Queue* queuePtr)
{
	if (queuePtr->front == -1 && queuePtr->rear == -1)
		return 0;

	*element = queuePtr->arr[queuePtr->front];

	if (queuePtr->front == queuePtr->rear)
		queuePtr->front = queuePtr->rear = -1;

	else
		queuePtr->front = (queuePtr->front + 1) % MAX;

	return 1;
}

//----------------------------------------

int queueSize(Queue* queuePtr)
{
	if (queuePtr->front == -1 && queuePtr->rear == -1)
		return 0;

	else if (queuePtr->front < queuePtr->rear)
		return (queuePtr->rear - queuePtr->front + 1);

	else if (queuePtr->rear < queuePtr->arr)
		return ((MAX - queuePtr->front) + (queuePtr->rear + 1));

	else
		return 1;

}

//----------------------------------------

void clearQueue(Queue* queuePtr)
{
	queuePtr->front = -1;
	queuePtr->rear = -1;
}