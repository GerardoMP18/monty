#include "monty.h"

/**
 * _free - Function free memory
 * @stack: Release the linked list
 * @line: Release the line of the getline function
 * used to store
 */

void _free(stack_t *stack, char *line)
{
	stack_t *temp = stack;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
	free(line);
}
