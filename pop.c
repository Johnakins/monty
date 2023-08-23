#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: the stack of elements
 * Return: void
 */
void pop(Stack *stack)
{
	if (stack->top == 0)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", __LINE__);
		exit (EXIT_FAILURE);
	}
	stack->top--;
}
