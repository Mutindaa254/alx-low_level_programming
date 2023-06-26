#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node in list
 * @head: A pointer to the head of the listint_t list
 * @index: The index of the node
 *
 * Return: node does not exist - NULL else located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while (n < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;

		n++;
	}

	return (head);
}
