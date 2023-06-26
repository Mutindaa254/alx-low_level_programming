#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: A pointer to the list_t list
 */
void free_list(list_t *head)
{
	list_t *release;

	while (head)
	{
		release = head->next;
		free(head->str);
		free(head);
		head = release;
	}
}
