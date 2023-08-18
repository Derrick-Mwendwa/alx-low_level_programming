#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head node
 * @index: index of the node to return
 *
 * Return: address of the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c_index;

	c_index = 0;

	while (head)
	{
		if (c_index == index)
			return (head);
		++c_index;
		head = head->next;
	}

	return (NULL);
}
