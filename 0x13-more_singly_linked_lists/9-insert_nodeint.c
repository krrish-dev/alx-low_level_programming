#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at the specified
 * index in a linked list.
 * @head: Address of a pointer to the first node.
 * @idx: Index at which to insert the new node.
 * @n: Value for the new node.
 *
 * This function inserts a new node with value 'n' at
 * the given 'idx' in the linked list
 * pointed to by '*head'. If 'idx' is out of bounds
 * or if memory allocation fails, it returns NULL.
 *
 * Return: Address of the newly inserted node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		i++;
		node = node->next;
	}
	free(new_node);
	return (NULL);
}
