#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int num)
{
	int n, y = 0, fl = 0;

	if (ibra.discu)
	{
		if (ibra.discu[0] == '-')
			y++;
		while (ibra.discu[y] != '\0')
		{
			if (ibra.discu[y] > 57 || ibra.discu[y] < 48)
			{
				fl = 1;
			}
			y++;
		}
		if (fl == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(ibra.reg);
			free(ibra.text);
			stack_free(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(ibra.reg);
		free(ibra.text);
		stack_free(*head);
		exit(EXIT_FAILURE); }
	n = atoi(ibra.discu);
	if (ibra.li == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}
