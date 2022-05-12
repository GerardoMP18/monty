#include "monty.h"

/**
 * func_swap - Function swaps the top two elements of the stack
 * @stack: list
 * @line_number: line number of file read
 */
void func_swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack != NULL && (*stack)->next)
	{
		tmp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = tmp;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}

