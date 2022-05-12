#include "monty.h"

/**
 * func_pint - Funcion to Implement the pint opcode.
 * @stack: list
 * @line_number: line number of file read
 */

void func_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp->n);
}
