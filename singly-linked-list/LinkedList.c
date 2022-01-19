#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"



Node* append(Node*head, dataType element)
{
	Node *newNode = NULL;

	newNode = (Node*)malloc(sizeof(Node));

	if (newNode == NULL)
		return NULL;

	newNode->element = element;

	newNode->next = NULL;
		
	if (head != NULL)
	{
		Node* temp = head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		
		temp->next = newNode;
	}

	return newNode;

}

//--------------------------------
int length(Node*head)
{
	int counter = 1;

	if (head == NULL)
		return 0;

	
	Node* temp = head;

	while (temp->next != NULL)
	{
		counter++;
		temp = temp->next;
	}

	return counter;
}

//--------------------------------
int getElement(Node* head, int nodeNumber, dataType* element)
{
	if (head == NULL)
		return 0;

	if ((nodeNumber > length(head)) || (nodeNumber < 1))
		return -1;

	int i = 1;

	Node* temp = head;

	while (i < nodeNumber)
	{
		temp = temp->next;
		i++;
	}

	*element = temp->element;
	
	return 1;
}

//--------------------------------

Node* deleteFirstNode(Node*head)
{
	
	
	if (head == NULL)
		return NULL;

	if (length(head) == 1)
	{
		free(head);
		return NULL;
	}

	else
	{
		Node* secondNode;
		secondNode= head->next;
		free(head);
		head = secondNode;
		
		return secondNode;
	}
	
}

//--------------------------------

int deleteNode(Node *head, int nodeNumber)
{
	if (head == NULL)
		return 0;

	if ((length(head) < nodeNumber) || (nodeNumber < 2))
		return -1;

	Node* prev = head, * current;
	int i = 1;

	while (i < (nodeNumber - 1))
	{
		prev = prev->next;
		i++;
	}

	current = prev->next;
	prev->next = current->next;
	free(current);

	return 1;

}

//--------------------------------

Node* insertFirst(Node*head, dataType element)
{
	if (head == NULL)
		return NULL;

	Node* firstNode;
	firstNode = (Node*)malloc(sizeof(Node));

	if (firstNode == NULL)
		return NULL;

	firstNode->element = element;
	firstNode->next = head;

	head = firstNode;

	return head;


	

}

//--------------------------------

int insertAfter(Node *head, int nodeNumber, dataType element)
{
	if (head == NULL)
		return 0;

	if( (nodeNumber > length(head)) || (nodeNumber < 1 ) )
		return -1;

	Node* prev = head, * current;
	int i = 1;
	current = (Node*)malloc(sizeof(Node));

	if (current == NULL)
		return 0;
	while (i < nodeNumber)
	{
		prev = prev->next;
		i++;
	}

	current->element = element;
	current->next = prev->next;
	prev->next = current;

	return 1;


}
