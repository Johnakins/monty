#include "monty.h"
/**
 * pall - remove the memory
 * @stack: the stack of memories
 * Return: void
 */
void pall(Stack *stack)
{
	int i;

	for (i = stack->top - 1; i >= 0; i--)
	{
		printf("%d\n", stack->data[i]);
	}
}
