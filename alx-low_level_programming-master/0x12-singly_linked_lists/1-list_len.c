#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: The linked list
 *
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t content;

	content = 0;

	while (h)
	{
		content++;
		h = h->next;
	}
	return (content);
}
