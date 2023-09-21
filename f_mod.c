#include "monty.h"
/**
 * f_mod_monty - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_mod_monty(stack_t **head, unsigned int num)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", num);
		fclose(ibra.reg);
		free(ibra.text);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	ptrh = *head;
	if (ptrh->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", num);
		fclose(ibra.reg);
		free(ibra.text);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	ax = ptrh->next->n % ptrh->n;
	ptrh->next->n = ax;
	*head = ptrh->next;
	free(ptrh);
}
