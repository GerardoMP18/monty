#ifndef _MONTY_H_
#define _MONTY_H_

<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
=======
/* libraries*/
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
>>>>>>> piero2023
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
<<<<<<< HEAD
        int n;
        struct stack_s *prev;
        struct stack_s *next;
=======
	int n;
	struct stack_s *prev;
	struct stack_s *next;
>>>>>>> piero2023
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
<<<<<<< HEAD
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
=======
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
void _free(stack_t *stack, char *line);
>>>>>>> piero2023

#endif /* _MONTY_H_*/
