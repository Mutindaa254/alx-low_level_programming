#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 * @head: a pointer to the head of the list_t list
 * @str: string to be added to the list
 *
 * Return: function fails - NULL
 * Otherwise - address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *first;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	first = strdup(str);
	if (first == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = first;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
