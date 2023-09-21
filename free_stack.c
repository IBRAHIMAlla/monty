#include "monty.h"
/**
* stack_free - frees a doubly linked list
* @head: head of the stack
*/
void stack_free(stack_t *head)
{
	stack_t *ax;

	ax = head;

	while (ax)
	{
		ax = ax->next;
		free(head);
		head = ax;
	}
}
