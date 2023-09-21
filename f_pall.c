#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @num: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int num)
{
	stack_t *hed;
	(void)num;

	hed = *head;
	if (hed == NULL)
		return;
	while (hed)
	{
		printf("%d\n", hed->n);
		hed = hed->next;
	}
}
