#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * @head: a pointer to the head of the list_t list
 * @str: string to be added to the list
 *
 * Return: function fails - NULL
 * Otherwise - address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *first;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	first = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = first;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
