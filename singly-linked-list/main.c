#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"



int main(void)
{

	Node* headPtr = NULL;
	dataType element;
	dataType*elementPtr = &element;
	int i,len;

	headPtr = append(headPtr,'S');
	append(headPtr, 'y');
	append(headPtr, 's');
	append(headPtr, 't');
	append(headPtr, 'e');
	append(headPtr, 'm');

	
	//---------------------------------------

	len = length(headPtr);
	printf("\nList's length in the begining is %d elements\n",len);
	for (i = 1; i <= len; i++)
	{
		getElement(headPtr, i, elementPtr);
		printf("\nelement NO %d: %c\n",i,*elementPtr);
	}
	
	printf("\n---------------------------\n");


	//--------------------------------------

	headPtr = deleteFirstNode(headPtr);
	len = length(headPtr);
	printf("\nList's length after using ( delete First Node ) function is %d elements\n", len);

	for (i = 1; i <= len; i++)
	{
		getElement(headPtr, i, elementPtr);
		printf("\nelement NO %d: %c\n", i, *elementPtr);
	}
	printf("\n---------------------------\n");

	//--------------------------------------

	deleteNode(headPtr,3);

	len = length(headPtr);

	printf("\nList's length after using ( delete Node ) function is %d elements\n", len);
	for (i = 1; i <= len; i++)
	{
		getElement(headPtr, i, elementPtr);
		printf("\nelement NO %d: %c\n", i, *elementPtr);
	}
	printf("\n---------------------------\n");

	//--------------------------------------

	headPtr = insertFirst(headPtr,'S');
	
	len = length(headPtr);

	printf("\nList's length after using ( insert First ) function is %d elements\n", len);
	for (i = 1; i <= len; i++)
	{
		getElement(headPtr, i, elementPtr);
		printf("\nelement NO %d: %c\n", i, *elementPtr);
	}
	printf("\n---------------------------\n");

	//--------------------------------------

	insertAfter(headPtr,3,'t');

	len = length(headPtr);

	printf("\nList's length after using ( insert After ) function is %d elements\n", len);
	for (i = 1; i <= len; i++)
	{
		getElement(headPtr, i, elementPtr);
		printf("\nelement NO %d: %c\n", i, *elementPtr);
	}
	printf("\n---------------------------\n");



	system("pause>0");
}