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

// implementation of stack function 
void push(int value, LList list) {


}



int  pop(LList list) {
	if (list.head == NULL)
		printf("empty");

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



