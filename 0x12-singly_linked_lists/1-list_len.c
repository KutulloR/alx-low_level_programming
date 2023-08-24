#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns The Number of Elements in a Linked List
 * @h: Pointer to the list_t list
 *
 * Return: Number of Elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
