#include "lists.h"

/**
 * pop_listint - removes head node of listint_t
 * @head: pointer to the head address
 *
 * Return: value in removed node otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int n;

	if (*head == NULL)
		return (0);

	x = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(x);

	return (n);
}
