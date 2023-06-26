#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * @head: a pointer to the address
 * @index: the index of the node to be deleted
 * Return: on success and -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *poet, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	poet = copy->next;
	copy->next = poet->next;
	free(poet);
	return (1);
}
