#include "monty.h"

/**
 * func_mod - Funcion division of the second top element of
 * the stack by the top element of the stack.
 * @stack: list
 * @line_number: line number of file read
 */
void func_mod(stack_t **stack, unsigned int line_number)
{
	int mod = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	mod = (*stack)->n;
	(*stack)->next->n %= mod;
	func_pop(stack, line_number);

}
