#include "lists.h"

/**
 * list_len - Determines the length
 * of a linked list
 * @head: A pointer to the first node
 *
 * Return: The size of the list
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
