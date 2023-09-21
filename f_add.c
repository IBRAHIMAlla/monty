#include "monty.h"
/**
 * f_add_monty - adds the top two elements of the stack.
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_add_monty(stack_t **head, unsigned int num)
{
	stack_t *ptrh;
	int lght = 0, ax;

	ptrh = *head;
	while (ptrh)
	{
		ptrh = ptrh->next;
		lght++;
	}
	if (lght < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", num);
		fclose(ibra.reg);
		free(ibra.text);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	ptrh = *head;
	ax = ptrh->n + ptrh->next->n;
	ptrh->next->n = ax;
	*head = ptrh->next;
	free(ptrh);
}
