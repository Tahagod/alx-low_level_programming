#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: address of pointer to the head node
 * @str: str field of node
 *
 * Return:the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new head->len = _strlen(new_head->str);
	}
	new head->next = *head;
	*head = new head;
	return (new_head);
}
