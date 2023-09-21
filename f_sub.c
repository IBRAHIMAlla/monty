#include "monty.h"
/**
  *f_sub_monty - sustration
  *@head: stack head
  *@num: line number
  *Return: no return
 */
void f_sub_monty(stack_t **head, unsigned int num)
{
	stack_t *ax;
	int s, nd;

	ax = *head;
	for (nd = 0; ax != NULL; nd++)
		ax = ax->next;
	if (nd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", num);
		fclose(bus.reg);
		free(bus.text);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	ax = *head;
	s = ax->next->n - ax->n;
	ax->next->n = s;
	*head = ax->next;
	free(ax);
}
