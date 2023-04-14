#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @j: memory to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int j)
{
	char *k;

	k = malloc(j);
	if (k == NULL)
	{
		exit(98);
	}
	return (k);
}
