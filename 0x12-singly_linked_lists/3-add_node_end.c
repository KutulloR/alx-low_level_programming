#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a New Node at The End of a Linked List
 * @head: Double Pointer to The list_t list
 * @str: String to Put in The New Node
 *
 * Return: Address of The New Element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
