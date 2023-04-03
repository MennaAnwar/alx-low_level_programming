#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head;
	listint_t *tmp = head;

	if (!head)
		return (NULL);

	while (current && tmp && tmp->next)
	{
		tmp = tmp->next->next;
		current = current->next;
		if (tmp == current)
		{
			current = head;
			while (current != tmp)
			{
				current = current->next;
				tmp = tmp->next;
			}
			return (tmp);
		}
	}

	return (NULL);
}

