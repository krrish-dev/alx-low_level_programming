#include "lists.h"

/**
 * add_node - Adds a new node to the start of the list
 * @head: Address of pointer to the head node
 * @str: String to be added to the new node
 *
 * Return: Pointer to the new head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
		return (NULL);
	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(new_node->str);
	}

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
