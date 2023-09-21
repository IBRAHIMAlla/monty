#include "monty.h"
/**
 * f_queue_monty - prints the top
 * @head: stack head
 * @num: line number
 * Return: no return
*/
void f_queue_monty(stack_t **head, unsigned int num)
{
	(void)head;
	(void)num;
	bus.lifi = 1;
}

/**
 * add_queue - add node to the tail stack
 * @n: new value
 * @head: head of the stack
 * Return: no return
*/
void add_queue(stack_t **head, int n)
{
	stack_t *node_n, *ax;

	ax = *head;
	node_n = malloc(sizeof(stack_t));
	if (node_n == NULL)
	{
		printf("Error\n");
	}
	node_n->n = n;
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
