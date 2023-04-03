#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		/*store next*/
		next = (*head)->next;

		/*reverse current node pointer*/
		(*head)->next = prev;

		/*move pointer one position ahead*/
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
