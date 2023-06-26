#include "lists.h"

/**
 * sum_listint - sum of all
 * @head: a pointer to the head of the list
 * Return: list is empty - 0 else sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
