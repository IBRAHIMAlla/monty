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
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int m = 0;
	char *opc;

	opc = strtok(text, " \n\t");
	if (opc && opc[0] == '#')
		return (0);
	bus.discu = strtok(NULL, " \n\t");
	while (opst[m].opcode && opc)
	{
		if (strcmp(opc, opst[m].opcode) == 0)
		{	opst[m].f(stack, num);
			return (0);
		}
		m++;
	}
	if (opc && opst[m].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", num, opc);
		fclose(reg);
		free(text);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
