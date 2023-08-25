#include "monty.h"

/**
<<<<<<< HEAD
 * f_push - func to add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: return void
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, k = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[k] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
=======
 * push - Adds a new node at the beginning of the stack
 * @stack: Pointer to the head of the stack
 * @param: The value to be added to the stack
 *
 * Return: Nothing
 */
void push(stack_t **stack, unsigned int param)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		handle_err(ERR_BAD_MALL, NULL, 0, NULL);

	new_node->n = param;
	if (*stack)
	{
		new_node->next = *stack;
		new_node->prev = (*stack)->prev;
		(*stack)->prev = new_node;
		*stack = new_node;
		return;
	}

	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}

/**
 * push_queue - Adds a new node at the end of the stack
 * @stack: Pointer to the head of the stack
 * @param: The value to be added to the stack
 *
 * Return: void
 */
void push_queue(stack_t **stack, unsigned int param)
{
	stack_t *current = NULL, *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		handle_err(ERR_BAD_MALL, NULL, 0, NULL);

	new_node->n = param;
	if (*stack)
	{
		current = *stack;
		while (current->next != NULL)
			current = current->next;

		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
		return;
	}

	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
>>>>>>> 12d0007ad5e0cb42d7d387be2221ab16330c1321
}

