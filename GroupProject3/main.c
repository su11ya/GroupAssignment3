#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "StackQueue.h"


int main() {
	LList Queue;
	//LList Stack 
	//a)	Add the following values 6, 7, 8, 2, 5  to the queue
	 
	
	//b)	Add the following values 6, 7, 8, 2, 5  to the stack
	LList* Stack = initLList();
	push(6, Stack);	
	push(7, Stack);	
	push(8, Stack);
	push(2, Stack);	
	push(5, Stack);

	printList(Stack);
	top(Stack);
	

	//c)	Remove an element from stack
	pop(Stack);
	printList(Stack);
	pop(Stack);
	printList(Stack);
	

	//d)	Remove an element from queue
	
	//e)	Display the next element to be removed(do not remove) in the stack
	top(Stack);

	//f)	Display the next element to be removed(do not remove) in the queue.*/




}

