#include "lists.h"

/**
 * add_nodeint - Adds a new node to
 * the beginning of a linked list.
 * @head: A pointer to the pointer
 * of the first node in the list.
 * @n: The value for the new node.
 *
 * Return: A pointer to the newly added node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
