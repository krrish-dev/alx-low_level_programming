#include "lists.h"

/**
 * free_listint2 - Frees a linked list of integers
 * and sets the head to NULL.
 * @head: Address of a pointer to the first node of the list.
 *
 * This function frees the memory allocated
 * for each node in the linked list,
 * starting from the first node pointed to
 * by '*head'. After freeing all nodes,
 * it sets the head pointer to NULL.
 *
 * Return: void (no return value).
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
