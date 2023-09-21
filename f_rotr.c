#include "monty.h"
/**
  *f_rotr_monty - rotates the stack to the bottom
  *@head: stack head
  *@num: line_number
  *Return: no return
 */
void f_rotr_monty(stack_t **head, __attribute__((unused)) unsigned int num)
{
	stack_t *cpy;

	c = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (c->next)
	{
		c = c->next;
	}
	c->next = *head;
	c->prev->next = NULL;
	c->prev = NULL;
	(*head)->prev = c;
	(*head) = c;
}
