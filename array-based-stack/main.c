
//stack array based implementation

#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main(void) {


	Stack stack;
	Stack*ptrStack = &stack;
	dataType element;
	dataType* ptrElement=&element;
	int i, len;
	init(ptrStack);

	//-------------------

	push('s', ptrStack);
	push('y', ptrStack);
	push('s', ptrStack);
	push('t', ptrStack);
	push('e', ptrStack);
	push('m', ptrStack);

	//-------------------
	if (isFull(ptrStack))
		printf("\nstack is full\n");

	else if (isEmpty(ptrStack))
		printf("\nstack is empty\n");

	else
		printf("\nstack size is %d",stackSize(ptrStack));

	printf("\n-------------------");

	//---------------------------------

	len = stackSize(ptrStack);
	for (i = 0; i < len; i++)
	{
		pop(ptrElement, ptrStack);
		printf("\n%c\n",*ptrElement);
		printf("Stack Size is %d\n----------------------\n", stackSize(ptrStack));
	}

	

	system("pause > 0");
}
