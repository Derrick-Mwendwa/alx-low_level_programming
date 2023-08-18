#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head node
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c_index;
	dlistint_t *node, *prev, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	prev = *head;
	c_index = 0;
	while (prev)
	{
		if (c_index == index - 1)
			break;
		++c_index;
		prev = prev->next;
	}

	if (prev == NULL)
		return (-1);
	if (prev->next == NULL)
		return (-1);

	next = prev->next->next;

	node = prev->next;
	prev->next = next;
	if (next)
		next->prev = prev;
	free(node);

	return (1);
}
