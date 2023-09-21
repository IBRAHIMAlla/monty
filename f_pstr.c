#include "monty.h"
/**
 * f_pstr_monty - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_pstr_monty(stack_t **head, unsigned int num)
{
	stack_t *ptrh;
	(void)num;

	ptrh = *head;
	while (ptrh)
	{
		if (ptrh->n > 127 || ptrh->n <= 0)
		{
			break;
		}
		printf("%c", ptrh->n);
		ptrh = ptrh->next;
	}
	printf("\n");
}
