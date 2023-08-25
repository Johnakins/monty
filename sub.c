#include "monty.h"
/**
 *f_sub- sustration
 *@head: stack head
 *@counter: line_number
 *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxil;
	int sus, nodes;

	auxil = *head;
	for (nodes = 0; auxil != NULL; nodes++)
		auxil = auxil->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxil = *head;
	sus = auxil->next->n - auxil->n;
	auxil->next->n = sus;
	*head = auxil->next;
	free(auxil);
}
