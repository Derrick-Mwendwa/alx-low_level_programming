#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - safely output a linked list
 * @head: pointer to head address
 *
 * Return: nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		x++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (x);
}
