#include "lists.h"

/**
 * free_list - Frees all nodes in a list
 * @head: Pointer to the head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	if (!head)
		return;

	current_node = head;
	while (current_node)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
