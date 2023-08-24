#include "monty.h"

/**
 * push - Implementation for push opcode
 * @stack: Pointer to the top of the stack
 * @param: Integer parameter to be pushed onto the stack
 */
void push(stack_t **stack, unsigned int param)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
		handle_error(ERR_BAD_MALL, NULL, param, NULL);

	new_node->n = param;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}

/**
 * push_queue - Implementation for push_queue opcode
 * @stack: Pointer to the top of the stack
 * @param: Integer parameter to be pushed onto the stack
 */
void push_queue(stack_t **stack, unsigned int param)
{
	/* Implementation for push_queue opcode */
}

/**
 * pall - Implementation for pall opcode
 * @stack: Pointer to the top of the stack
 * @line_number: Line number in the Monty file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

/**
 * pint - Implementation for pint opcode
 * @stack: Pointer to the top of the stack
 * @line_number: Line number in the Monty file
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
		handle_uerror(ERR_PINT_USG, line_number);

	printf("%d\n", (*stack)->n);
}

/**
 * pop - Implementation for pop opcode
 * @stack: Pointer to the top of the stack
 * @line_number: Line number in the Monty file
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
		handle_uerror(ERR_POP_USG, line_number);

	stack_t *temp = *stack;
	*stack = (*stack)->next;

	if (*stack)
		(*stack)->prev = NULL;

	free(temp);
}
