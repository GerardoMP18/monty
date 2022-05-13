#include "monty.h"
/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: success
 */
int main(int argc, char **argv)
{
	char *line = NULL, *tokenizer = NULL;
	size_t size = 0;
	stack_t *stack = NULL;
	unsigned int number = 0;

	fl = fopen(argv[1], "r");

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	if (fl == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &size, fl) != -1)
	{
		number++;
		tokenizer = strtok(line, "\n ");
		if (tokenizer == NULL || strncmp(line, "#", 1) == 0)
			continue;
		if (strcmp(tokenizer, "push") == 0)
		{
			tokenizer = strtok(NULL, "\n ");
			func_push(tokenizer, &stack, number);
		}
		else
			get_operator(tokenizer, &stack, number);
	}
	fclose(fl), _free(stack, line);
	return (EXIT_SUCCESS);
}
