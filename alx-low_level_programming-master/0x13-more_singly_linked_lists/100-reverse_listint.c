#include "lists.h"

/**
 * reverse_listint - Reverses a list
 * @head: pointer to the address
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *initial, *last;

	if (head == NULL || *head == NULL)
		return (NULL);

	last = NULL;

	while ((*head)->next != NULL)
	{
		initial = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = initial;
	}
	(*head)->next = last;
	return (*head);
}
