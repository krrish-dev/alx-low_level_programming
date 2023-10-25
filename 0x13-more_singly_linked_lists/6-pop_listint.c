#include "lists.h"

/**
 * pop_listint - Removes and returns the value
 * of the first node in a list.
 * @head: Address of a pointer to the first node of the list.
 *
 * This function removes the first node in the list,
 * returns its value, and frees
 * its memory. If the list is empty, it returns 0.
 *
 * Return: The value of the removed node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
