#include  "monty.h"
/**
 * swap - swaps an element
 * @stack: the stack of memories
 * Return: void
 */
void swap(Stack *stack)
{
	int temp;

	if (stack->top < 2)
	{                                 
		fprintf(stderr, "L%d: can't swap, stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	temp = stack->data[stack->top - 1];
	stack->data[stack->top - 1] =stack->data[stack->top -2];
	stack->data[stack->top - 2] = temp;
}
