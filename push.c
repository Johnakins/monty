#include "monty.h"
/**
 * push - removes a memory
 * @stack: the pointer
 * @value: the values of the memory
 * Return: void
 */
void push(Stack *stack, int value)
{
	if (stack->top == STACK_SIZE)
	{
		fprintf(stderr, "Stack overflow\n");
		exit(EXIT_FAILURE);
	}
	stack->data[stack->top++] = value;
}
