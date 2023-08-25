#include "monty.h"
<<<<<<< HEAD
/**
 * free_stack - func to frees a doubly linked list
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *auxil;

	auxil = head;
	while (head)
	{
		auxil = head->next;
		free(head);
		head = auxil;
	}
}
=======

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

>>>>>>> 12d0007ad5e0cb42d7d387be2221ab16330c1321
