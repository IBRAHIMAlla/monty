#include "monty.h"
/**
 * add_node - add node to the head stack
 * @head: head of the stack
 * @n: new value
 * Return: no return
*/
void add_node(stack_t **head, int n)
{

	stack_t *node_n, *ax;

	ax = *head;
	node_n = malloc(sizeof(stack_t));
	if (node_n == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ax)
		ax->prev = node_n;
	node_n->n = n;
	node_n->next = *head;
	node_n->prev = NULL;
	*head = node_n;
}
