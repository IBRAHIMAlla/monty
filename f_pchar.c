#include "monty.h"
/**
 * f_pchar_monty - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_pchar_monty(stack_t **head, unsigned int num)
{
	stack_t *ptrh;

	ptrh = *head;
	if (!ptrh)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", num);
		fclose(bus.reg);
		free(bus.text);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	if (ptrh->n > 127 || ptrh->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", num);
		fclose(bus.reg);
		free(bus.text);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ptrh->n);
}
