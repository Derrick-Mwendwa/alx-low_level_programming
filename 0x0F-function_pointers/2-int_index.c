#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - gets the index of the first element
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to the function int_index
 *
 * Return: index of first element otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
