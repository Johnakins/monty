#include "monty.h"
/**
 * f_mul - func to multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return (void)
 */
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auxil = h->next->n * h->n;
	h->next->n = auxil;
	*head = h->next;
	free(h);
}

