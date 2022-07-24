#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "StackQueue.h"


int main() {
	LList Queue;
	//LList Stack 
	//a)	Add the following values 6, 7, 8, 2, 5  to the queue
	//b)	Add the following values 6, 7, 8, 2, 5  to the stack
	NodePtr np = makeNode(60);
	printf("\n%d", np->num);
	LList* Stack = initLList();
	push(6, Stack);
	printList(Stack);
	push(7, Stack);
	printList(Stack);
	push(8, Stack);
	printList(Stack);
	push(2, Stack);
	printList(Stack);
	push(5, Stack);
	printList(Stack);
	
	
	
	

	//c)	Remove an element from stack
	//pop(Stack);
	//d)	Remove an element from queue
	//e)	Display the next element to be removed(do not remove) in the stack
	//top(Stack);
	//f)	Display the next element to be removed(do not remove) in the queue.*/




}

