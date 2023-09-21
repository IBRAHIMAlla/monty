#ifndef MONTY_H
#define MONTY_H
#define  _GNU_SOURCE
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

typedef struct bus_m
{
	char *discu;
	FILE *reg;
	char *text;
	int lifi;
}  bus_f;
extern bus_f bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void f_push(stack_t **head, unsigned int num);
void f_queue(stack_t **head, unsigned int num);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void stack_free(stack_t *head);
void f_pall(stack_t **head, unsigned int num);
int execute(char *text, stack_t **stack, unsigned int num, FILE *reg);
void f_pint(stack_t **head, unsigned int num);
void f_pop_monty(stack_t **head, unsigned int num);
void f_swap_monty(stack_t **head, unsigned int num);
void f_add_monty(stack_t **head, unsigned int num);
void f_nop_monty(stack_t **head, unsigned int num);
void f_sub_monty(stack_t **head, unsigned int num);
void f_div_monty(stack_t **head, unsigned int num);
void f_mul_monty(stack_t **head, unsigned int num);
void f_mod_monty(stack_t **head, unsigned int num);
void f_pchar_monty(stack_t **head, unsigned int num);
#endif
