#ifndef _MONTY_H_
#define _MONTY_H_

/* libraries*/
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
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
/*Global variables*/
extern FILE *fl;
FILE *fl;

/*operator of instruction to function*/
int get_operator(char *op, stack_t **stack, unsigned int line_number);

/*Function*/
void func_pall(stack_t **stack, unsigned int line_number);
void func_push(char *token, stack_t **stack, unsigned int line_number);
void func_pint(stack_t **stack, unsigned int line_number);
void _free(stack_t *stack, char *line);

#endif /* _MONTY_H_*/
