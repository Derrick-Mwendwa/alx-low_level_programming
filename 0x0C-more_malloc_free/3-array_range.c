#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the created array
 * or NULL if it is not a success
 */
int *array_range(int min, int max)
{
	int *a;
	int b, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(*a) * size);
	if (a == NULL)
		return (NULL);

	for (b = 0; min <= max; b++, min++)
		a[b] = min;

	return (a);
}
