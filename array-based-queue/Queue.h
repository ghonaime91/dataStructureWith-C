#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

//Queue size and data type
#define MAX 10
#define dataType char
// Queue 
typedef struct {
	dataType arr[MAX];
	int front;
	int rear;
}Queue;

//interface "prototypes"
void init(Queue*);
int isEmpty(Queue*);
int isFull(Queue*);
int enqueue(dataType, Queue*);
int dequeue(dataType*, Queue*);
int queueSize(Queue*);
void clearQueue(Queue*);













#endif
