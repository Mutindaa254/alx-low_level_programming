#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the head of list_t
 *
 * Return: The number of nodes in the list_t
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	for (num = 0; h; num++)
	{
		printf("%d\n", h->n);
		h = (*h).next;
	}
	return (num);
}
