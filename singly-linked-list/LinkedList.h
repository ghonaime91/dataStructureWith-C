#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#define dataType char

// linked list definition
typedef struct node {
	dataType element;
	struct node* next;
}Node;

//the functions prototypes

Node* append(Node*,dataType);
int length(Node*);
int getElement(Node*, int, dataType*);
Node* deleteFirstNode(Node*);
int deleteNode(Node*,int);
Node* insertFirst(Node*,dataType);
int insertAfter(Node*, int, dataType);


















#endif
