#include "monty.h"
/**
 * func_push - Function to insert the data according to
 * the value of the read file
 * @token: number
 * @stack: List of back issues added
 * @line_number: Line number of the operation read
 */

void func_push(char *token, stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	int i = 0;

	if (token == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (token[i] != '\0')
	{
		if (*token == '-')
			i++;
		if (isdigit(token[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		perror("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = atoi(token);
	new->prev = NULL;
	new->next = NULL;

	if (*stack != NULL)
	{
		(*stack)->prev = new;
		new->next = *stack;
	}
	*stack = new;
}
