#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "StackQueue.h"

/// <summary>
/// Student Name: Ya Su, Li Fan
/// </summary>
/// <returns></returns>

int main() {
	//Initialize Queue;
	LList Queue = (LList)malloc(sizeof(LListType));
	Queue->head = NULL;
	Queue->tail = NULL;

	//Initialize Stack;
	LList Stack = (LList)malloc(sizeof(LListType));
	Stack->head = NULL;
	Stack->tail = NULL;
	
	//a)	Add the following values 6, 7, 8, 2, 5  to the queue
	enqueue(6, Queue);
	enqueue(7, Queue);
	enqueue(8, Queue);
	enqueue(2, Queue);
	enqueue(5, Queue);

	printf("\nElements present in the Queue: \n");
	printList(Queue);
	
	//b)	Add the following values 6, 7, 8, 2, 5  to the stack
	push(6, Stack);	
	push(7, Stack);	
	push(8, Stack);
	push(2, Stack);	
	push(5, Stack);

	printf("\nElements present in the Stack: \n");
	printList(Stack);
	

	//c)	Remove an element from stack
	pop(Stack);
	printf("\nElements present in the Stack: \n");
	printList(Stack);	

	//d)	Remove an element from queue
	dequeue(Queue);
	printf("\nElements present in the Queue: \n");
	printList(Queue);

	//e)	Display the next element to be removed(do not remove) in the stack
	top(Stack);

	//f)	Display the next element to be removed(do not remove) in the queue.*/
	peek(Queue);




}

 