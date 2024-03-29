#include "monty.h"
/**
 * addnode - func to add node to the head stack
 * @head: head the stack
 * @n: new_value
 * Return: no return
 */
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *auxil;

	auxil = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (auxil)
		auxil->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
