#include "lists.h"


/**
 * list_len - Counts nodes in a linked list.
 * @head: First node in the list.
 *
 * Return: Number of nodes.
 */

size_t list_len(const list_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		head = head->next;
		node_count++;
	}
	return (node_count);
}
