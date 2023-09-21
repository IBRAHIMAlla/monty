#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @num: line_counter
* @reg: poiner to monty file
* @text: line content
* Return: no return
*/
int execute(char *text, stack_t **stack, unsigned int num, FILE *reg)
{
	instruction_t opti[] = {
				{"push", f_push},
				{"pall", f_pall},
				{"queue", f_queue},
				{"pint", f_pint},
				{"pop", f_pop_monty},
				{"swap", f_swap_monty},
				{"add", f_add_monty},
				{"nop", f_nop_monty},
				{"sub", f_sub_monty},
				{"div", f_div_monty},
				};
	unsigned int m = 0;
	char *opc;

	opc = strtok(text, " \n\t");
	if (opc && opc[0] == '#')
		return (0);
	bus.discu = strtok(NULL, " \n\t");
	while (opti[m].opcode && opc)
	{
		if (strcmp(opc, opti[m].opcode) == 0)
		{	opti[m].f(stack, num);
			return (0);
		}
		m++;
	}
	if (opc && opti[m].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", num, opc);
		fclose(reg);
		free(text);
		stack_free(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
