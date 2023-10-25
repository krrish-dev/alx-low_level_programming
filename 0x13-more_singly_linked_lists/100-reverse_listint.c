#include "lists.h"

/**
 * reverse_listint - Reverses the order of nodes
 *  in a linked list of integers.
 * @head: Address of a pointer to the first node.
 *
 * This function reverses the order of nodes
 *  in the linked list pointed to by '*head'.
 * If the list is empty or 'head' is NULL,
 *  it returns NULL. Otherwise, it returns the
 * address of the new head of the reversed list.
 *
 * Return: Address of the new head of the reversed list,
 * or NULL on failure.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
