#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

//stack size and adata type
#define MAX 10
#define dataType char
// stack 
typedef struct {
	dataType arr[MAX];
	int top;
}Stack;
//interface "prototypes"
void init(Stack*);
int isEmpty(Stack*);
int isFull(Stack*);
int push(dataType, Stack*);
int pop(dataType*, Stack*);
int stackSize(Stack*);
void clearStack(Stack*);


#endif