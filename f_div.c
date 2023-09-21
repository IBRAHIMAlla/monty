#include "monty.h"
/**
 * f_div_monty - divides the top two elements of the stack.
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_div_monty(stack_t **head, unsigned int num)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", num);
		fclose(bus.reg);
		free(bus.text);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	ptrh = *head;
	if (ptrh->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", num);
		fclose(bus.reg);
		free(bus.text);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	ax = ptrh->next->n / ptrh->n;
	ptrh->next->n = ax;
	*head = ptrh->next;
	free(ptrh);
}
