#include "monty.h"
/**
 * f_mod - func to computes the rest of the division of the second
 * @head: stack head
 * @counter: line_number
 * Return: no return (void)
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, auxil;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxil = h->next->n % h->n;
	h->next->n = auxil;
	*head = h->next;
	free(h);
}
