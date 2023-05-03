#include "lists.h"

/**
 * get_nodeint_at_index - finds a node
 * @head: pointer to the head
 * @index: index to find
 *
 * Return: located node otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
