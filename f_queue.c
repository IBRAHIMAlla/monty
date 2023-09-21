#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int num)
{
	(void)head;
	(void)num;
	bus.lifi = 1;
}

/**
 * add_queue - add node to the tail stack
 * @m: new value
 * @head: head of the stack
 * Return: no return
*/
void add_queue(stack_t **head, int m)
{
	stack_t *node_n, *ax;

	ax = *head;
	node_n = malloc(sizeof(stack_t));
	if (node_n == NULL)
	{
		printf("Error\n");
	}
	node_n->m = m;
	node_n->next = NULL;
	if (ax)
	{
		for (; ax->next; ax = ax->next)
		{
		}
	}
	if (!ax)
	{
		*head = node_n;
		node_n->prev = NULL;
	}
	else
	{
		ax->next = node_n;
		node_n->prev = ax;
	}
}
