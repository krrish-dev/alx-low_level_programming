#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @str: the string whose length to check
 *
 * Return: the integer length of the string
 */
int _strlen(char *str)
{
    int length = 0;

    if (!str)
        return (0);
    while (*str++)
        length++;
    return length;
}

/**
 * print_list - prints the elements of a linked list
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
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
    return node_count;
}
