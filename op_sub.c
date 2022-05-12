#include "monty.h"

/**
 * func_sub - Function to subs the top two elements of the stack.
 * @stack: list
 * @line_number: line number of file read in program monty
 */
void func_sub(stack_t **stack, unsigned int line_number)
{
	int sub = 0;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		sub = (*stack)->n;
		(*stack)->next->n -= sub;
		func_pop(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
