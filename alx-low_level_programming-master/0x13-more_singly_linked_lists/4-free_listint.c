#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: A pointer to the list_tint list
 */
void free_listint(listint_t *head)
{
	listint_t *release;

	while (head)
	{
		release = head->next;
		free(head);
		head = release;
	}
}
