#include "lists.h"

/**
 * sum_listint - Computes the sum of all
 * data values in a linked list.
 * @head: A pointer to the first node of the list.
 *
 * This function iterates through the linked list,
 * adding up all the data values
 * in the nodes, and returns the total sum.
 *
 * Return: The sum of all data values in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
