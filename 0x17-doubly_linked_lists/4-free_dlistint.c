#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: head of list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
