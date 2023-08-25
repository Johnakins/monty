#include "monty.h"

/**
<<<<<<< HEAD
 * f_pall - func to prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return (void)
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
=======
 * pall - Prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 *
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *cur = NULL;
	(void) line_number;

	if (*stack)
	{
		cur = *stack;
		while (cur != NULL)
		{
			printf("%d\n", cur->n);
			cur = cur->next;
		}
>>>>>>> 12d0007ad5e0cb42d7d387be2221ab16330c1321
	}
}
