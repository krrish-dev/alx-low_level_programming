#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of a linked list.
 * @head: A pointer to the pointer of the first node in the list.
 * @n: The value for the new node.
 *
 * Return: A pointer to the newly added node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}
