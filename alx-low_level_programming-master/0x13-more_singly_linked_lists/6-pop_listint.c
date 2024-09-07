#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: a pointer to the address of the head
 * Return: if the linked list is empty - 0 else head value
 */

int pop_listint(listint_t **head)
{
	listint_t *release;
	int del;

	if (*head == NULL)
		return (0);

	release = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(release);

	return (del);
}
