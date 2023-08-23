#include "monty.h"
/**
 * add - adds an element in the stack
 * @stack : the stack of memories
 * Return: void
 */
void add(Stack *stack)
{
	int result;

	if (stack->top < 2)
	{
		fprintf(stderr, "L%d: scan't add, stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}

	result = stack->data[stack->top -1] + stack->data[stack->top - 2];
	stack->data[stack->top - 2] = result;
	stack->top--;
}
