#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the list
 * Return: if list is looped 0 else number of nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *local, *poet;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	local = head->next;
	poet = (head->next)->next;

	while (poet)
	{
		if (local == poet)
		{
			local = head;
			while (local != poet)
			{
				nodes++;
				local = local->next;
				poet = poet->next;
			}

			local = local->next;
			while (local != poet)
			{
				nodes++;
				local = local->next;
			}

			return (nodes);
		}

		local = local->next;
		poet = (poet->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}


		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
