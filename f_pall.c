#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @num: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int num)
{
	stack_t *ptr;
	(void)num;

	ptr = *head;
	if (ptr == NULL)
		return;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
