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
} LListType, * LList;



//NodePtr makeNode(int n) {
//	NodePtr np = (NodePtr)malloc(sizeof(Node));
//	np->num = n;
//	np->next = NULL;
//	return np;
//}

//LList initLList() {
//	//LList list;
//	LList list = (LList)malloc(sizeof(LListType));
//	list->head = NULL;
//	list->tail = NULL;
//	return list;
//}

/**
 * @brief print the stack
 * @param list 
*/
void printList(LList list) {
	NodePtr np = list->head;
	if (list->head == NULL) {
		printf("\nEmpty");
	}
	else {
		printf("\nElements present in the Stack: \n");
		while (np != NULL) {
			printf(" %d\n", np->num);
			np = np->next;
		}

	}

}

// implementation of stack function 

/**
 * @brief add an element to stack
 * @param value 
 * @param list 
*/
void push(int value, LList list) {
	//NodePtr np = makeNode(value);
	NodePtr np = (NodePtr)malloc(sizeof(Node));
	np->num = value;
	np->next = NULL;
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


/**
 * @brief remove an element from stack
 * @param list 
 * @return the element has been removed
*/
int pop(LList list) {
	NodePtr np = list->head;
	if (list->head == NULL) {
		//if the list is empty
		printf("Stack is empty");
	}
	else {
		printf("\nRemoved element from Stack : % d", list->head->num);
		list->head = list->head->next;
		free(np);

	}

}

/**
 * @brief display the top element (the element to be removed)
 * @param list 
 * @return the element to be removed
*/
int top(LList list) {
	if (list->head == NULL) {
		printf("Stack is empty");
	}
	else {
		printf("Top element(the next element to be removed) in Stack is %d", list->head->num);
	}
}

// implementation of the queue using singly linked list
void enqueue(int value, LList list) {


}
//int  dequeue(LList list) {
//	if (list.head)
//		printf("empty");
//
//}
int peek(LList list) {


}



