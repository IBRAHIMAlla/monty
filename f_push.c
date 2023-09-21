#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int num)
{
	stack_t *ptr = malloc(sizeof(stack_t));

	if (head == NULL)
		return;
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	ptr->n = num;
	ptr->next = *head;
	ptr->prev = NULL;
	if (*head)
		(*head)->prev = ptr;
	*head = ptr;
}
