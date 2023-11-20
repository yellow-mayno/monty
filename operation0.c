#include "monty.h"

/**
* push_stack - pushes int to the stack/queue
* @stack: just to conforme to the instruction_t (will be NULL)
* @line_number: just to conforme to the instruction_t (will be 0)
* Return: 0 / 1
*/

int push_stack(stack_t **stack __attribute__((unused)),
					unsigned int line_number __attribute__((unused)))
{
	stack_t *new;
	int operand;

	operand = convert();
	if (operand == INT_MIN + 1052000)
	{
		printf("L<%d>: usage: push integer", line_number);
		return (EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		free(new);
		puts("Error: malloc failed");
		return (EXIT_FAILURE);
	}
	new->n = operand;
	new->prev = NULL;
	/* for stack */
	new->next = staque;
	if (staque == NULL)
		staque = new;
	else
		staque->prev = new;
	/* -- */
	return (EXIT_SUCCESS);
}

/**
* pall_stack - prints all the stack from top to bottom
* @stack: just to conforme to the instruction_t (will be NULL)
* @line_number: just to conforme to the instruction_t (will be 0)
* Return: 1/0
*/

int pall_stack(stack_t **stack __attribute__((unused)),
					unsigned int line_number __attribute__((unused)))
{
	stack_t *ptr = staque;

	while (ptr != NULL)
	{
		printf("%d\n", staque->n);
		ptr = staque->next;
	}
	return (EXIT_SUCCESS);
}
