#include "monty.h"
/**
 * f_queue - func to prints the top
 * @head: stack head
 * @counter: line_number
 * Return: return void
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - func to add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: return void
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *auxil;

	auxil = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (auxil)
	{
		while (auxil->next)
			auxil = auxil->next;
	}
	if (!auxil)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		auxil->next = new_node;
		new_node->prev = auxil;
	}
}

