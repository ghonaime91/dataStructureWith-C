
#include "Stack.h"
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
int push(dataType data, Stack* stackPtr) {

	if (isFull(stackPtr))
		return 0;
	stackPtr->top++;
	stackPtr->arr[stackPtr->top] = data;
	return 1;
}
//-------------------------------
int pop(dataType* data, Stack* stackPtr) {
	if (isEmpty(stackPtr))
		return 0;
	*data = stackPtr->arr[stackPtr->top];
	stackPtr->top--;
	return 1;


}
//-------------------------------
int stackSize(Stack* stackPtr) {
	return (stackPtr->top == -1) ? 0 : (stackPtr->top + 1);
}
//-------------------------------
void clearStack(Stack* stackPtr) {
	stackPtr->top = -1;
}