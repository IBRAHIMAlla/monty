#include "monty.h"
/**
* stack_free - frees a doubly linked list
* @head: head of the stack
*/
void stack_free(stack_t *head)
{
	stack_t *ax;

	ax = head;
	for (; head; head = ax)
	{
		aux = head->next;
		free(head);
	}
}
