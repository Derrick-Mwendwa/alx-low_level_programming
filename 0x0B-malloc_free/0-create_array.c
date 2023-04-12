#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create a char array and initialize with c
 * @size: size of array
 * @c: char for initialization
 *
 * Return: pointer to array otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *temp;

	if (size == 0)
	{
		return (NULL);
	}

	temp = malloc(sizeof(char) * size);
	if (temp == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(temp + i) = c;
	}

	return (temp);
}
