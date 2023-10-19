#include "lists.h"

/**
 * _strlen - Computes the length of a string.
 * @str: The string whose length is to be determined.
 *
 * Return: The integer length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	if (!str)
		return (0);
	while (*str++)
		length++;
	return (length);
}

/**
 * print_list - Prints the elements of a linked list.
 * @head: Pointer to the first node of the list.
 *
 * Return: The size of the list (number of nodes).
 */
size_t print_list(const list_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		printf("[%d] %s\n", _strlen(head->str), head->str ? head->str : "(nil)");
		head = head->next;
		node_count++;
	}
	return (node_count);
}
