#include "monty.h"

/**
 * func_div - Function to div the top two of the stack.
 * @stack: list
 * @line_number: line number of file read in program monty.
 */

void func_div(stack_t **stack, unsigned int line_number)
{
	int div = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);

	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	div = (*stack)->n;
	(*stack)->next->n /= div;
	func_pop(stack, line_number);
}
