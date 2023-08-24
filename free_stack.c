#include "monty.h"

/**
 * frees_stack - Releases all elements in the stack
 *
 * Return: Nothing
 */
void frees_stack(void)
{
	stack_t *p = NULL;

	if (head)
	{
		p = head;

		while (p)
		{
			head = head->next;
			free(p);
			p = head;
		}
	}
}

