#include "monty.h"
/**
  *f_rotl_monty - rotates the stack to the top
  *@head: stack head
  *@num: line_number
  *Return: no return
 */
void f_rotl_monty(stack_t **head,  __attribute__((unused)) unsigned int num)
{
	stack_t *tp = *head, *ax;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	ax = (*head)->next;
	ax->prev = NULL;
	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tp;
	(*head) = ax;
}
