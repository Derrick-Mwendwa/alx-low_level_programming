#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head node
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c_index;
	dlistint_t *node, *prev, *next;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	prev = *h;
	c_index = 0;
	while (prev)
	{
		if (c_index == idx - 1)
			break;
		++c_index;
		prev = prev->next;
	}

	if (prev == NULL)
		return (NULL);

	if (prev->next == NULL)
		return (add_dnodeint_end(h, n));

	next = prev->next;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = prev;
	node->next = next;

	prev->next = node;
	next->prev = node;

	return (node);
}
