#include "lists.h"

/**
 * sum_listint - calculates the values in listint_t
 * @head: pointer to head
 *
 * Return: sum of values otherwise 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
