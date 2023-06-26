#include "lists.h"

/**
 * looped_listint_count - Counts the number of unique nodes
 * @head: a pointer to the head of the list
 * Return: if list is not looped - 0 else number of nodes
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *local, *poet;
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
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptrl;
	size_t nodes, index;

	nodes = looped_listint_count(*h);
	
	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			ptrl = (*h)->next;
			free(*h);
			*h = ptrl;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			ptrl = (*h)->next;
			free(*h);
			*h =ptrl;
		}


		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
