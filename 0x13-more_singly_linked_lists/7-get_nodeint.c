#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a specified index
 *  in a linked list.
 * @head: A pointer to the first node of the list.
 * @index: The index of the node to retrieve.
 *
 * This function returns a pointer to the node
 * at the given index in the linked list.
 * If the index is out of bounds,
 * or if the list is empty, it returns NULL.
 *
 * Return: A pointer to the specified node, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
