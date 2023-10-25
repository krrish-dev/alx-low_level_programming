#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node
 * at the specified index in a linked list.
 * @head: Address of a pointer to the first node.
 * @index: Index of the node to delete.
 *
 * This function removes the node at the given 'index' in the linked
 * list pointed to by '*head'.
 * If the index is out of bounds or if the list is empty,
 * it returns -1. On success, it returns 1.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
