#include "lists.h"

/**
 * free_listint - Frees a linked list of integers.
 * @head: A pointer to the first node of the list.
 *
 * This function frees the memory allocated
 * for each node in the linked list,
 * starting from the first node pointed to by 'head'.
 *
 * Return: void (no return value).
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
