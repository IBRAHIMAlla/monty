#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int num)
{
	int m, y = 0, fl = 0;

	if (bus.discu)
	{
		if (bus.discu[0] == '-')
			y++;
		for (bus.discu[y] != '\0')
		{
			if (bus.discu[y] > 57 || bus.discu[y] < 48)
			{
				fl = 1;
			}
			y++;
		}
		if (fl == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(bus.reg);
			free(bus.text);
			stack_free(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(bus.reg);
		free(bus.text);
		stack_free(*head);
		exit(EXIT_FAILURE); }
	m = atoi(bus.discu);
	if (bus.lifi == 0)
		add_node(head, m);
	else
		add_queue(head, m);
}
