#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list
 * @head: list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *c;

	while (head)
	{
		c = head->next;
		free(head->str);
		free(head);
		head = c;
	}
}
