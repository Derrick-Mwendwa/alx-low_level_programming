#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @size1: size of the allocated space for ptr
 * @size2: new size in the byte of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int size1, unsigned int size2)
{
	char *x, *y;
	unsigned int c;

	if (size1 == size2)
		return (ptr);

	if (size2 == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(size2));

	x = malloc(size2);
	if (x == NULL)
		return (NULL);

	y = ptr;

	if (size2 < size1)
	{
		for (c = 0; c < size2; c++)
			x[c] = y[c];
	}

	if (size2 > size1)
	{
		for (c = 0; c < size1; c++)
			x[c] = y[c];
	}

	free(ptr);
	return (x);
}
