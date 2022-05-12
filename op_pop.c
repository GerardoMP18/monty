#include "monty.h"

/**
 * func_pop - function to implement the pop opcode.
 * @stack: list
 * @line_number: line number of file read
 */

void func_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (tmp->next != NULL)
	{
		tmp->next->prev = NULL;
	}
	*stack = tmp->next;
	free(tmp);
}
