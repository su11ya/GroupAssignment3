#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "StackQueue.h"

/// <summary>
/// Student Name: Ya Su, Li Fan
/// </summary>
/// <returns></returns>

int main() {
	LList Queue;

	//Initialize Stack;
	LList Stack = (LList)malloc(sizeof(LListType));
	Stack->head = NULL;
	Stack->tail = NULL;
	
	//a)	Add the following values 6, 7, 8, 2, 5  to the queue
	 
	
	//b)	Add the following values 6, 7, 8, 2, 5  to the stack
	
	push(6, Stack);	
	push(7, Stack);	
	push(8, Stack);
	push(2, Stack);	
	push(5, Stack);

	printList(Stack);
	
	

	//c)	Remove an element from stack
	pop(Stack);
	printList(Stack);	

	//d)	Remove an element from queue
	
	//e)	Display the next element to be removed(do not remove) in the stack
	top(Stack);

	//f)	Display the next element to be removed(do not remove) in the queue.*/




}

 