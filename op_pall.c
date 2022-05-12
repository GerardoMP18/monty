#include "monty.h"
/**
 * func_pall - Function to print the list added
 * @stack: list to print
 * @line_number: line number of the operator read
 */

void func_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
