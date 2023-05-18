#include "lists.h"
/**
 * dlistint_len - length of linked list
 * @h: head of list
 * Return: size_t value
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int size = 0;

	current = h;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}
