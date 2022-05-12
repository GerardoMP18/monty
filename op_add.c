#include "monty.h"

/**
 * func_add - Function to adds the top two elements of the stack.
 * @stack: list
 * @line_number: line number of file read in program monty
 */
void func_add(stack_t **stack, unsigned int line_number)
{
	int suma = 0;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		suma = (*stack)->n;
		(*stack)->next->n += suma;
		func_pop(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
