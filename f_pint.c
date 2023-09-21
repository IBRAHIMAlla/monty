#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", num);
		fclose(bus.reg);
		free(bus.text);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
