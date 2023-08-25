#include "monty.h"
/**
  *f_rotl- func to rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: return void
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *auxil;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxil = (*head)->next;
	auxil->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = auxil;
}

