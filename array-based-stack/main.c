
//stack array based implementation

#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
//stack size
#define MAX 10
// stack 
typedef struct {
	int nums[MAX];
	int top;
}Stack;
//interface "prototypes"
void init(Stack*);
int isEmpty(Stack*);
int isFull(Stack*);
int push(int, Stack*);
int pop(Stack*);
int stackSize(Stack*);
void clearStack(Stack*);

int main(void) {
	int n;
	Stack stack, * ptrStack = &stack;
	init(ptrStack);

	push(10, ptrStack);
	push(20, ptrStack);
	push(150, ptrStack);
	push(120, ptrStack);

	printf("nums[3] = %d\n", stack.nums[3]);
	n = pop(ptrStack);
	printf("last number was %d and became %d\n", n, stack.nums[stack.top]);
	printf("the elements in stack are %d elements\n", stackSize(ptrStack));
	push(520, ptrStack);
	printf("last number is %d \n", stack.nums[stack.top]);
	printf("the elements in stack are %d elements\n", stackSize(ptrStack));

	system("pause > 0");
}

//stack's functions implementaion

void init(Stack* stackPtr) {

	stackPtr->top = -1;

}
//-------------------------------
int isEmpty(Stack* stackPtr) {

	if (stackPtr->top == -1)
		return 1;
	return 0;

}
//-------------------------------
int isFull(Stack* stackPtr) {

	if (stackPtr->top == MAX - 1)
		return 1;
	return 0;

}
//-------------------------------
int push(int data, Stack* stackPtr) {

	if (isFull(stackPtr))
		return 0;
	stackPtr->top++;
	stackPtr->nums[stackPtr->top] = data;
	return 1;
}
//-------------------------------
int pop(Stack* stackPtr) {
	if (isEmpty(stackPtr))
		return 0;
	int n = stackPtr->nums[stackPtr->top];
	stackPtr->top--;
	return n;


}
//-------------------------------
int stackSize(Stack* stackPtr) {
	return (stackPtr->top == -1) ? 0 : (stackPtr->top + 1);
}
//-------------------------------
void clearStack(Stack* stackPtr) {
	stackPtr->top = -1;
}