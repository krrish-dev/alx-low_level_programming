#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @str: the string whose length to check
 *
 * Return: integer length of string
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
 * print_list - prints a linked lists
 * @head: pointer to first node
 *
 * Return: size of list
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
