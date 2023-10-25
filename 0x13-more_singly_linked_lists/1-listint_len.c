#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: A pointer to the first node of the linked list.
 *
 * Returns: The size (number of nodes) in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
