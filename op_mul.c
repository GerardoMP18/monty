#include "monty.h"

/**
 * func_mul - Funcion multiplies the second top element of the
 * stack with the top element of the stack.
 * @stack: list
 * @line_number: line number of file read
 */
void func_mul(stack_t **stack, unsigned int line_number)
{
	int mul = 0;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		mul = (*stack)->n;
		(*stack)->next->n -= mul;
		func_pop(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;
	func_pop(stack, line_number);
}
