#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: pointer to the head address
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x, *y;

	if (head == NULL || *head == NULL)
		return (NULL);

	y = NULL;

	while ((*head)->next != NULL)
	{
		x = (*head)->next;
		(*head)->next = y;
		y = *head;
		*head = x;
	}

	(*head)->next = y;

	return (*head);
}
