#include "monty.h"
/**
 * f_pop_monty - prints the top
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_pop_monty(stack_t **head, unsigned int num)
{
	stack_t *ptrh;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num);
		fclose(bus.reg);
		free(bus.text);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	ptrh = *head;
	*head = ptrh->next;
	free(ptrh);
}
