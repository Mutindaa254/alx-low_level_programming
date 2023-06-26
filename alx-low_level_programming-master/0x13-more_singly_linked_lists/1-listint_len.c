#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * @h: pointer to the head of listint_t
 *
 * Return: The number of elements in the listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h; num++)
	{
		h = (*h).next;
	}
	return (num);
}
