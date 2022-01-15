
//Balanced parentheses

#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack.h"

int isMatched(char open,char close);
int isBalanced(char exp[]);
//---------------------------------------

int main(void) {

	char exp[30];
	printf("Enter Your Expression:  ");
	scanf("%s", exp);

	if (isBalanced(exp))
		printf("Balanced\n");
	else
		printf("Not Balanced\n");

	system("pause > 0");
}

//---------------------------------------

int isMatched(char open, char close)
{
	if (open == '(' && close == ')')
		return 1;
	else if (open == '[' && close == ']')
		return 1;
	else if (open == '{' && close == '}')
		return 1;
	else
		return 0;
}

//---------------------------------------

int isBalanced(char exp[])
{
	Stack stack;
	Stack* ptrStack = &stack;
	char element;
	char len = strlen(exp);
	int i;

	init(ptrStack);
	for (i = 0; i < len; i++)
	{
		if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
			push(exp[i], ptrStack);
		
		else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
		{
			if (isEmpty(ptrStack))
				return 0;
			else
			{
				pop(&element, ptrStack);
				if (!isMatched(element, exp[i])) return 0;
			}
		}
	}

	if (isEmpty(ptrStack))
		return 1;
	else
		return 0;
}