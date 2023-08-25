#include "monty.h"

/**
<<<<<<< HEAD
 * f_pint - func to prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return (void)
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
=======
 * pint - Prints the value at the top of the stack,
 * followed by a new line.
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 *
 * Return: Nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		handle_error(ERR_PINT_USG, NULL, line_number, NULL);

	printf("%d\n", (*stack)->n);
>>>>>>> 12d0007ad5e0cb42d7d387be2221ab16330c1321
}

