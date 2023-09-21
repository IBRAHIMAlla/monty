#include "monty.h"
ibra_f ibra;
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *text;
	FILE *reg;
	size_t i = 0;
	ssize_t line_read = 1;
	stack_t *stack = NULL;
	unsigned int num = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	reg = fopen(argv[1], "r");
	ibra.reg = reg;
	if (!reg)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line_read > 0)
	{
		text = NULL;
		line_read = getline(&text, &i, reg);
		ibra.text = text;
		num++;
		if (line_read > 0)
		{
			execute(text, &stack, num, reg);
		}
		free(text);
	}
	stack_free(stack);
	fclose(reg);
return (0);
}
