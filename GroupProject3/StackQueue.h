#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>


typedef struct node {
	int num; // the data in this node of the list
	struct node* next; // the pointer to the next node
} Node, * NodePtr;

typedef struct llist {
	NodePtr head;
	NodePtr tail;
} LList;



NodePtr makeNode(int n) {
	NodePtr np = (NodePtr)malloc(sizeof(Node));
	np->num = n;
	np->next = NULL;
	return np;
}

LList* initLList() {
	//LList list;
	LList* list = (LList*)malloc(sizeof(struct llist));
	list->head = NULL;
	list->tail = NULL;
	return list;
}

//LList initLList() {
//	LList np = (LList)malloc(sizeof(struct llist));
//	
//
//}
void printList(LList* list) {
	NodePtr np = list->head;
	//if (list.head == NULL) {
	//	printf("\nEmpty");
	//}
	//else {
	printf("\nElements present in the Stack: \n");
	while (np != NULL) {
		printf(" %d\n", np->num);
		np = np->next;
	}
	/*printf("%d\n", list.head->num);*/
//}

}

// implementation of stack function 
void push(int value, LList* list) {
	NodePtr np = makeNode(value);
	if (list->head == NULL) {

		list->tail = np;
	}
	else {
		np->next = list->head;

	}
	list->head = np;

	//insert back
	/*NodePtr np = makeNode(value);
	if (list->head== NULL) {
		list->head = np;
	}
	else {
		list->tail->next = np;
	}
	list->tail = np;
	*/
}



int pop(LList* list) {
	NodePtr np = list->head;
	if (list->head == NULL) {
		//if the list is empty
		printf("empty");
	}
	else {
		printf("\nRemoved element : % d", list->head->num);
		list->head = list->head->next;		
		free(np);

	}


}
// return the value to be removed
int top(LList list) {

}
// implementation of the queue using singly linked list
void enqueue(int value, LList list) {


}
int  dequeue(LList list) {
	if (list.head)
		printf("empty");

}
int peek(LList list) {

}



