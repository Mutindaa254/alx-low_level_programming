#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the address
 * @idx: the index of the list
 * @n: the integer for the new node to contain
 * Return: function fails - NULL else address of node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *poet, *copy = *head;
	unsigned int node;

	poet = malloc(sizeof(listint_t));
	if (poet == NULL)
		return (NULL);

	poet->n = n;

	if (idx == 0)
	{
		poet->next = copy;
		*head = poet;
		return (poet);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	poet->next = copy->next;
	copy->next = poet;
	return (poet);
}
