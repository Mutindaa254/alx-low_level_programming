#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: The head of the dlistint_t list
 *
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	for (num = 0; h != NULL; num++)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", (*h).len, (*h).str);
		h = (*h).next;
	}

	return (num);
}
