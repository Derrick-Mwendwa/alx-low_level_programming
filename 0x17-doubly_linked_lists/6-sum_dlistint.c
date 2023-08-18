#include "lists.h"

/**
 * sum_dlistint - returns the sum of all (n) of a dlistint_t list
 * @head: pointer to the head node
 *
 * Return: sum of all (n) of a dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
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
