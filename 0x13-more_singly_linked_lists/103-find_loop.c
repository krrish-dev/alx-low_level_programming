#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - Finds a loop in a linked list.
 * @head: The linked list to search for a loop.
 *
 * This function examines a linked list and
 * identifies the starting point of a loop,
 * if one exists. If there is no loop in the
 * list, it returns NULL.
 *
 * Return: The address of the node where the loop
 * starts/returns, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}

	return (NULL);
}
