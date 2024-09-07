#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: A pointer to the list_tint list
 */

void free_listint2(listint_t **head)
{
	listint_t *release;

	if (head == NULL)
		return;

	while (*head)
	{
		release = (*head)->next;
		free(*head);
		*head = release;
	}

	head = NULL;
}
