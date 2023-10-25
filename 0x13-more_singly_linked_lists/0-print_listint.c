#include "lists.h"

/**
 * print_listint - prints linked list and returns size
 * @h: pointer to first node
 *
 *This function takes as input a pointer
 *to the first node of a linked list and
 * iterates through the list,
 * printing the value of each node (h->n)
 * on a new line.
 * It also keeps track of the number of elements
 * printed and returns that count.
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
