#include "lists.h"

/**
 * dlistint_len - counts the number of nodes in a linked list
 * @h: head of list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
