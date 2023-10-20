#include "lists.h"

/**
 *add_node_end - adds a node to the end of the list
 *@head: address of pointer to the head node
 *@str: str field of node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
			free(new_head);
			return (NULL);
		new_head->len = _strlen(new_head->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_head;
	}
	else
		*head = new_head;
	return (new_head);
}
