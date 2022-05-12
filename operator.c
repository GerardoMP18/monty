#include "monty.h"

/**
 * get_operator - Function that is responsible for comparing if it
 * is equal to the interpreter read to execute the function
 * @op: operator of line read
 * @stack: list parameters of the entered data
 * @line_number: Line number of the operation read
 * Return: ...
 */

int get_operator(char *op, stack_t **stack, unsigned int line_number)
{
		instruction_t functions[] = {
		{"pall", func_pall},
		{"pint", func_pint},
		{"pop", func_pop},
		{NULL, NULL},
	};
	int x = 0;

	while (functions[x].opcode)
	{
		if (strcmp(op, functions[x].opcode) == 0)
		{
			functions[x].f(stack, line_number);
			return (EXIT_SUCCESS);
		}
		x++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
	exit(EXIT_FAILURE);
}
