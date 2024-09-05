#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the struct list_t
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t num;

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
