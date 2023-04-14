#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @num: number or elements
 * @size: the size of each element
 *
 * Return: pointer to the allocated memory
 * or NULL if it fails
 */
void *_calloc(unsigned int num, unsigned int size)
{
	char *a;
	unsigned int j;

	if (num == 0 || size == 0)
		return (NULL);

	a = malloc(num * size);
	if (a == NULL)
		return (NULL);
	for (j = 0; j < (num * size); j++)
	{
		a[j] = 0;
	}
	return (a);
}
