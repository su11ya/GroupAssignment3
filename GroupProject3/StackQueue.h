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


/**
 * @brief print the stack or queue
 * @param list 
*/
void printList(LList list) {
	NodePtr np = list->head;
	if (list->head == NULL) {
		printf("\nEmpty");
	}
	else {
		
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
}


/**
 * @brief remove an element from stack
 * @param list 
 * @return the element removed
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

/**
 * @brief add an element to queue
 * @param value 
 * @param list 
*/
void enqueue(int value, LList list) {
	// allocate storage for new node
	NodePtr np = (NodePtr)malloc(sizeof(Node));
	np->num = value;
	np->next = NULL;
	// if empty queue, set head and tail point to it
	if (list->head == NULL) {
		list->head = np;
		list->tail = np;
	}
	// if queue is not empty, add it to the tail of list
	else {
		list->tail->next = np;
		list->tail = np;
	}

}

/**
 * @brief remove an element from queue
 * @param list 
 * @return the element removed
*/
int  dequeue(LList list) {
	// end the program if the queue if empty
	if (list->head == NULL) {
		printf("The queue is empty");
		exit(1);
	}
	int hold = list->head->num;

	printf("\nRemoved element from Queue: % d", hold);
	NodePtr temp = list->head;
	list->head = list->head->next;
	// queue becomes empty if head is null after remove the head node
	if (list->head == NULL)
		list->tail = NULL;
	free(temp);
	return hold;
}

/**
 * @brief display the top element in queque (the element to be removed)
 * @param list 
 * @return the top element in queue 
*/
int peek(LList list) {
	if (list->head == NULL) {
		printf("Queue is empty");
	}
	else {
		printf("\nTop element(the next element to be removed) in Queue is %d", list->head->num);
	}

}



